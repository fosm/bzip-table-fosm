//class WayNodeFile
class WayNodeFileEntry
{
public:
  long int way;
  long int node;
public:
  WayNodeFileEntry(const long int & way,const long int & node):
    way(way),
    node(node)
  {      }

  void write (ostream & os) {
    os << way  << "\t" 
       << node   << endl;
  }

};


class WayNodeFile {
public:
  vector< WayNodeFileEntry > data;
  ofstream txtfile;
  ofstream file;
  string   filename;
  long int total_count;
  long int write_count;
  int total_way_count;
  
  WayNodeFile(const char * filename)
    :txtfile(string(string ("datafiles/") +  string(filename) + ".txt").c_str()),
     file(string(string ("datafiles/") + string(filename) + ".bin").c_str()),
     total_way_count(0),
     total_count(0),
     write_count(0),
     filename(filename)
  {    
    // now write a 0 that is the count of object, it will be filled in at the end with the count of ways
    file.write((const char*)&total_way_count, sizeof(long int)); // skip the binary file now
  }           

  ~WayNodeFile()
  {
    int count =data.size();
    write(count);
    data.clear();
    txtfile.close();
    cout << "Closing file " << filename << ", wrote " << total_count << endl;
  }

  void flush()
  {
    write(data.size());
  }

  long long count()
  {
    return total_count;
  }

  void write(int count)
  {

    // way count
    file.write((const char*)&write_count, sizeof(long int)); // skip the binary file now
    // append the data to the file


    typename vector< WayNodeFileEntry >::iterator i;
    int index=0;
    int way=0;
    for(i=data.begin();i!=data.end();i++)
      {
        // check this
        //file.write((const char*)&data[i], 1 * sizeof(WayNodeFileEntry)); // skip the binary file now
        //        typename vector< WayNodeFileEntry >::iterator i2=data[i];
        if (way != i->way)
          {
            // new way
            file.write((const char*)&i->way, 1 * sizeof(long int)); // skip the binary file now
            way = i->way; // we look for changes
            total_way_count++;
          }
        file.write((const char*)&i->node, 1 * sizeof(long int)); // write a node cound, set to zero and we will fix it later.
        //file.write((const char*)&data[i].node, 1 * sizeof(long int)); // write a node
        i->write (txtfile);
        write_count++;
        index ++;

      }
    cout << "wrote " << total_count << endl;
    data.clear(); // erase the data
  }
  
  void push_back (long int & way,long int & node ){
    total_count++;
    WayNodeFileEntry v (way,node);
    data.push_back(v);
    int count =data.size();
    if (count > blocksize)   {
      write(count);
    }           
  }
       
};
