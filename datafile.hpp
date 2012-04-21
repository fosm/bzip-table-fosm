template <class T> class DataFile {
public:
  vector<T> data;
  ofstream  file;
  ofstream  txtfile;
  string    filename;
  long long total_count;
  
  DataFile(const char * filename)
    :file(string(string ("datafiles/") + string(filename) + ".bin").c_str()),
     txtfile(string(string ("datafiles/") +  string(filename) + ".txt").c_str()),
     total_count(0),
     filename(filename)
  {    
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
