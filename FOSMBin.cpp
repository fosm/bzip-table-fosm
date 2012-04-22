#include "FOSMBin.hpp"

template <class T> int Geography::read_data (const char * filename,vector<T> & vdata)
{
  FILE * pFile;
  pFile = fopen ( filename , "r" );
  if (!pFile)   {
    printf("file \'%s\' could not be opened\n",filename);
    return 2;
  }
  printf("opened file \'%s\'\n",filename);
  int count;
  int i=0;
  //    int br=fread ((void*)&count , sizeof(int), 1 , pFile ); // count of ways
  //printf("Reading bytes %d count %d\n",br,count);
    //T data[count];
    //    vector<T> vdata;
    while (1){
      T data;
      int br= fread ((void*)&data , sizeof(T), 1 , pFile ); // index
      if (br<=0)  goto done ;
      //cerr << "data : br"<< br<< "data:" << data << endl;
      //for (i =0; i < count; i++)    {
      vdata.push_back(data);
    }
  done :
    fclose (pFile);
    return 0;
}


#define Q2(X,X2) cerr << X << ":" << X2.count() << endl;
#define Q(X) Q2( #X , X )
void Geography::report()
  {
    /*
Q(component_map_t)
      Q(way_nodes_t)
      Q(nodes_ways_t)
      Q(way_component_t)
      Q(node_components)
      Q(node_lat)
      Q(node_lon)
      Q(node_id)
      Q(way_id)
      Q(component_map)
      Q(way_nodes)
      Q(node_ways)
      Q(way_components)
    */

      cerr << "node_components" << ":" << node_components.size() << endl;
      cerr << "node_lat" << ":" << node_lat.size() << endl;
      cerr << "node_lon" << ":" << node_lon.size() << endl;
      cerr << "node_id" << ":" << node_id.size() << endl;
      cerr << "way_id" << ":" << way_id.size() << endl;
      cerr << "component_map" << ":" << component_map.size() << endl;
      cerr << "way_nodes" << ":" << way_nodes.size() << endl;
      cerr << "node_ways" << ":" << node_ways.size() << endl;
      cerr << "way_components" << ":" << way_components.size() << endl;

      //      Q(debug)  
}

int Geography::read_way_nodes() {
    FILE * pFile;
    pFile = fopen ( "datafiles/way_nodes.bin" , "r" );
    if (!pFile)   {
      //      perror("");
        printf("file datafile/way_nodes.bin could not be opened\n");
      return 2;
    }
    printf("data file datafile/way_nodes.bin opened\n");

    int node_count; // should be zero
    int br=fread ((void*)&node_count, sizeof(long int), 1 , pFile ); // 
    //cerr << "first br"<< br << " node count:" << node_count << endl;
        
    while (1) { // for each way

      int way; // way index, not id
      br=fread ((void*)&way , sizeof(int), 1 , pFile ); // count of ways
      //cerr << "br:"<< br<< "way:" << way << endl;

      int j=0;
      while (1) { // for each node in way until null 
        int waynode;
        br=fread ((void*)&waynode, sizeof(long int), 1 , pFile ); // 
        if (br == 0) goto done;
        if (waynode == -1) goto donelist;
        //        cerr << " br:"<< br << " node:" << waynode ;
        //             << endl;
        way_nodes[way].push_back(waynode); //the way contains this node
        node_ways[waynode].push_back(way); //the node is in this way       
        j++;
        
      }
    donelist :    
      int donothing;

      //      cerr << "done list" << endl;
      //cerr << " nc:"  << j   << endl;

    };

  done:
    //cerr << "done file" << endl;
    fclose (pFile);
    return 0;

  } // read nodes





void Geography::read_data()
{
  read_node_lat();
  read_node_lon();
  read_node_id();
  read_way_id();
  read_way_nodes();
}

void Geography::read_components() {
  read_data<int> ("components.bin",node_components);    
  reverse_components();
}

void Geography::read_node_lat(){ read_data<double> ("datafiles/node_lat.bin"   , node_lat); }
void Geography::read_node_lon(){ read_data<double> ("datafiles/node_lon.bin"   , node_lon); }
void Geography::read_node_id() { read_data<int>    ("datafiles/node_ids.bin" , node_id);  }
void Geography::read_way_id()  { read_data<int>    ("datafiles/way_ids.bin"  , way_id);   }

template <class T> void Geography::emit(vector<T> & data) {
    vector<int>::const_iterator cii;
    cerr << endl << "Iterator:" << endl;
    for(cii=data.begin(); cii!=data.end(); cii++)
      {
        cerr << *cii << endl;
      }
  }


Geography::Geography()
{
  debug=1;
}

void Geography::reverse_components () 
  {

    int index=0;
    vector<int>::const_iterator cii;
    for(cii=node_components.begin(); cii!=node_components.end(); cii++)
      {
        component_map[*cii].push_back(index);
        if (debug > 8)
          {
            cout << "Component " << *cii << "contains node "<< index << endl;
          }
        index++;
      }
  }

void Geography::emit_ways_components()
  {
    cerr << "output the way components " << endl;
    way_component_t::iterator wcit;
    for (wcit=way_components.begin();wcit!=way_components.end();wcit++)    {
      std::map<int,int>::iterator wcit2;
      int comp = wcit->second;
      cerr << "way:" << wcit->first << "\tcomponent:" <<  comp  <<  endl;
    }
  }

