#define USE_TEXT 1
template <class T> class DataFile {
public:
  vector<T> data;
  ofstream  file;
#ifdef USE_TEXT
  ofstream  txtfile;
#endif
  string    filename;
  long long total_count;
  const char * dirname;
  long blockcount;

  DataFile(const char * dirname,long blockcount,const char * filename)
    :     
    total_count(0),
    filename(filename),
    dirname(dirname),
    blockcount(blockcount)
  { 
    string outputbase(string (dirname) + string(filename));
    file.open(string (outputbase + ".bin").c_str());
    #ifdef USE_TEXT
    txtfile.open(string(outputbase+ ".txt").c_str());    
    #endif
  }           

  ~DataFile()
  {
    int count =data.size();
    write(count);
    file.close();
#ifdef USE_TEXT
    txtfile.close();
#endif
    //    cout << "Closing file "<< dirname << filename << ", wrote " << total_count << endl;
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
    // append the data to the file
    file.write((const char*)&data[0], count * sizeof(T));
#ifdef USE_TEXT
    typename vector<T>::iterator i;
    for(i=data.begin();i!=data.end();i++)
      {
        txtfile << *i << endl;
      }
    data.clear(); // erase the data
#endif
  }
  
  void push_back (const T& v){
    total_count++;
    //    cout << "pushing " << filename << " value "<< v << endl; 

    data.push_back(v);
    int count =data.size();
    if (count > blocksize)    
      {
        write(count);
      }           
  }
       
};
