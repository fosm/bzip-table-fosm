//class WayNodeFile
class WayNodeFileEntry
{
public:
  //  long int way;
  //  long int node;
  int iway;
  long int inode;
public:
  WayNodeFileEntry(//const long int & way,
                   const int & iway,
                   //const long int & node,
                   const long int & inode):
    //    way(way),
    //    node(node),
    iway(iway),
    inode(inode)
  {      
  }

  void write (ostream & os) {
    //    os << way  << "[" << iway << "]\t" 
    //       << node << "[" << inode << "]\t" << endl;
    os <<  iway <<"\t" 
       <<  inode << endl;
  }

};


class WayNodeFile {
public:
  vector< WayNodeFileEntry > way_nodes;
  ofstream txtfile;
  ofstream txtfile2; // debug of the bin file
  ofstream file;
  string   filename;
  long int total_count;
  long int write_count;
  int total_way_count;
  const char * dirname;
  long blockcount;
  
  WayNodeFile(const char * dirname,long blockcount,const char * filename)
      :     total_way_count(0),
            total_count(0),
            write_count(0),
            filename(filename),
            dirname(dirname),
            blockcount(blockcount)
  {    
    string outputbase(string (dirname) + string(filename));
    txtfile.open(string(outputbase + ".txt").c_str());
    txtfile2.open(string(outputbase + "2.txt").c_str());
    file.open(string(outputbase + ".bin").c_str());

  }           

  ~WayNodeFile()
  {
    int count =way_nodes.size();
    write(count);
    way_nodes.clear();
    txtfile.close();
    txtfile2.close();
    cout << "Closing file " << filename << ", wrote " << total_count << endl;
  }

  void flush()
  {
    write(way_nodes.size());
  }

  long long count()
  {
    return total_count;
  }

  void write(int count)
  {
    vector< WayNodeFileEntry >::iterator i;
    int index=0;
    int way=-1;
    for(i=way_nodes.begin();i!=way_nodes.end();i++)
      {
        if (way != i->iway)
          {
            long int zero=-1;
            file.write((const char*)&zero, 1 * sizeof(int)); // zero before each list
            txtfile2 << "Z" << zero << endl;

            // new way
            file.write((const char*)&i->iway, 1 * sizeof(long int)); // skip the binary file now
            way = i->iway; // we look for changes
            txtfile2 << "W:"<< way<< endl; // way
            total_way_count++;
          }

        // write the null int node to end
        file.write((const char*)&(i->inode), 1 * sizeof(int));
        txtfile2 << "ND:"<< i->inode; // way

        i->write (txtfile);
        write_count++;
        index ++;

      }
    cout << "wrote " << total_count << endl;
    way_nodes.clear(); // erase the way_nodes
  }
  
  void push_back (int & iway,long int & inode ){
    total_count++;
    WayNodeFileEntry v (iway,inode);
    way_nodes.push_back(v);
    int count =way_nodes.size();
    if (count > blocksize)   {
      write(count);
    }           
  }
       
};
