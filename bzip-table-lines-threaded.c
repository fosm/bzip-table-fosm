#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bzlib.h>
#include <stdio.h>
#include <stdlib.h>
#include "fcntl.h"
#include "errno.h"
#include <thread>
#include <queue>
#include <mutex>
#define BUF_SIZE 4096 * 100 

std::mutex globalsystem;
std::mutex queuelock;
std::condition_variable cond;
bool data_ready=0;

std::mutex globalsystem_finished;
bool data_finished=0;

int debug() {return 0;}

class Datablock
{
 public:
  int blockcount;
  char buf[BUF_SIZE];  

  Datablock() {
    blockcount=0;
    buf[0]=0;
    }

  //  std::thread thread;
 Datablock(int blockcount,  const char * pbuf) :
  blockcount(blockcount)//,
  //    thread (threadprocess)
  {
    strncpy(buf,pbuf,BUF_SIZE);
  }


 Datablock(const Datablock & r) 
   {
     blockcount=r.blockcount;
     strncpy(buf,r.buf,BUF_SIZE);
   }
  
 
};

std::queue<Datablock> dataqueue;

static void threadprocess ()
{
  std::thread::id id;               // Refers to no thread
  id = std::this_thread::get_id();  // get id for this thread
  //  printf("thread process %llu starting \n",id);

  {
    std::unique_lock<std::mutex> lk(globalsystem);
    while(!data_ready)
      {
        //        printf("thread process %llu waiting \n",id);
        cond.wait(lk);
      }
    //    printf("thread process finished waiting \n",id);
  } // finish the lock 
  //
  while (1)
    {
      //      printf("begin of while thread process %llu\n",id);
      {

        if (dataqueue.size()>1)    {
          Datablock  b;
          {
            std::unique_lock<std::mutex> lk(queuelock);
            // now we have the lock, check the size again
            if (dataqueue.size()>1)    {
              printf("queue size %d\n",dataqueue.size());
              Datablock b2 = dataqueue.front();
              b=b2;
              dataqueue.pop();            

            }
          }
          if (b.blockcount>0)
            {
              printf("block %d, size %d\n",b.blockcount,strlen(b.buf));
              std::this_thread::sleep_for(std::chrono::milliseconds(400)); // simulate processing, dont do this inside the 
            }
        }
        else 
          {
            //            printf("before going to get the lock for finished\n");
            {
              //              printf("going to get the lock for finished\n");
              std::unique_lock<std::mutex> lk(globalsystem_finished);
              if (data_finished)
                {
                  //  printf("thread process finished no data left \n",id);
                  return;
                }
            }
            //            printf("thread process %llu no data\n",id);
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
          }
        
        //        printf("end of while thread process %llu\n",id);
      }


    }
}
const int threadcount=5;


class MyThread : public std::thread {
 public :
 MyThread() : std::thread(threadprocess) {
    printf("my thread created\n");
  }

};

std::vector<MyThread> threads(threadcount);

void jointhreads()
{
  //  printf("joining threads\n");
  // a short lock
  {
    //    printf("locking global\n");
    std::unique_lock<std::mutex> lk(globalsystem_finished);
    data_finished=1;
  }

  int i;
  for (i=0;i<threadcount; i++)  { // wait for all to finishe?
    std::thread::id id = threads[i].get_id();
    //    printf("looking at %d with id %llu\n",i,id);
    if(threads[i].joinable()){
      //      printf("going to join %d with id %llu\n",i,id);
      threads[i].join();
      //      printf("joined %d with id %llu\n",i,id);
    }
    else
      {
        //        printf("i %d is not joinable",i);
      }
  }
  //  printf("done waiting for joining\n");

}


int
bunzip_one(FILE *f) {
  int bzError=0;
  BZFILE *bzf=0;

  bzf = BZ2_bzReadOpen(&bzError, f, 0, 0, NULL, 0);
  if (bzError != BZ_OK) {
    fprintf(stderr, "E: BZ2_bzReadOpen: %d\n", bzError);
    return -1;
  }
  int blockcount =0;
  char buf[BUF_SIZE];    
  while (bzError == BZ_OK) {
    int nread = BZ2_bzRead(&bzError, bzf, buf, sizeof buf);
    if (bzError == BZ_OK || bzError == BZ_STREAM_END) {
      //      printf("got count %d\n",nread); // debug
      
      // each block depends on the previous block, but can skip the first items until the previoud block is finished.
      Datablock data(blockcount,buf);
      {
        std::unique_lock<std::mutex> lk(queuelock);
        dataqueue.push(data);
        if (dataqueue.size() > threadcount)   {
          printf("queue size %d\n",dataqueue.size());
          int i=0;
          {
            printf("queue size %d\n",dataqueue.size());
            for (i=0;i<threadcount; i++)  { // wait for all to finishe?
              std::thread::id id = threads[i].get_id();
              //              printf("looking at %d with id %llu\n",i,id);
            }
          }  
        }      
      }

      if (blockcount == 0)
        {
          printf("going to start threads\n");
          std::unique_lock<std::mutex> lk(globalsystem);
          data_ready=true;
          cond.notify_all();
        }

      blockcount++;

    }   
  }

  if (bzError != BZ_STREAM_END) {
    jointhreads();
    fprintf(stderr, "E: bzip error after read: %d\n", bzError);
    return -1;
  }

  BZ2_bzReadClose(&bzError, bzf);
  jointhreads();
  return 0;
}

int main(int argc, const char ** argv) {

  FILE *f;
  printf("argc %d\n",argc);
  if (argc>=2)      {
    printf("argv %s\n",argv[1]);
  } else   {
    printf("no file\n");
    return 0;
  }
  
  printf("going to open %s\n",argv[1]);	       
  f=fopen(argv[1], "rb");
  if (f == NULL)
    {
      printf("error %d\n",errno);
      perror(argv[1]);
      return 233;
    }
  else     {
    //    printf("file opened with fd %d\n",fd);
  }

  if (bunzip_one(f) == -1)
    return -1;
  
  fclose(f);
  return 0;
}
