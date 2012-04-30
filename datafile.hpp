template <class T> class DataFile {
public:
  vector<T> data;
  ofstream  file;
  ofstream  txtfile;
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
    txtfile.open(string(outputbase+ ".txt").c_str());    
  }           

  ~DataFile()
  {
    int count =data.size();
    write(count);
    file.close();
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
    // append the data to the file
    file.write((const char*)&data[0], count * sizeof(T));

    typename vector<T>::iterator i;
    for(i=data.begin();i!=data.end();i++)
      {
        txtfile << *i << endl;
      }
    data.clear(); // erase the data
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
