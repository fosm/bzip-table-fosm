// tag file
class TagFileEntry
{
public:
  long int id;
  string key;
  string value;
public:
  TagFileEntry(const long int & id,string & k,string & v ):
    id(id),
    key(k),
    value(v)  {      }
  void write (ostream & os) {
    os << id  << "\t" 
        << key << "\t" 
        << value  <<  endl;
  }

};


class TagFile {
public:
  vector< TagFileEntry > data;
  ofstream  txtfile;
  string    filename;
  long long total_count;
  
  TagFile(const char * filename)
    :txtfile(string(string ("datafiles/") +  string(filename) + ".txt").c_str()),
     total_count(0),
     filename(filename)
  {    
  }           

  ~TagFile()
  {
    int count =data.size();
    write(count);
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
    // file.write((const char*)&data[0], count * sizeof(T)); // skip the binary file now
    typename vector< TagFileEntry >::iterator i;
    for(i=data.begin();i!=data.end();i++)
      {
        i->write (txtfile);
      }
    data.clear(); // erase the data
  }
  
  void push_back (long int pos, string & key, string & val){
    total_count++;
    TagFileEntry v (pos,key,val);
    data.push_back(v);
    int count =data.size();
    if (count > blocksize)   {
      write(count);
    }           
  }
       
};
