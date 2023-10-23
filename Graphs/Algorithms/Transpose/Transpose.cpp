#include <bits/stdc++.h>
using namespace std;

class Graph{

    
    public:
    int V ; //No of vertices
    vector<vector<int>> adjacencyList;

    Graph(int vertices)
    {
        V= vertices;
        adjacencyList.resize(V);
    }

    void addEdge(int u,int v)
    {
        adjacencyList[u].push_back(v);
    }
        

    void print()
    {
        for(int i=0;i<V;i++)
        {
            cout<<"Adjacency list of vertex "<<i<<" : ";
            for(auto neighbour : adjacencyList[i])
            {
                cout<<neighbour<<" ";
            }
            cout<<endl;
        }
        
    }
};

void transpose(Graph org,Graph &transpose)
{
   for(int i=0;i<org.V;i++)
   {
      for(int j=0;j<org.adjacencyList[i].size();j++)
      {
        transpose.addEdge(org.adjacencyList[i][j],i);
      }
   }
}

int main()
{
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,3);

    g.print();

    Graph trans(5);
    transpose(g,trans);
    trans.print();
}
