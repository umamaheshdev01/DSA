#include <bits/stdc++.h>
using namespace std;

class Graph{

    private:
    int V ; //No of vertices
    vector<vector<int>> adjacencyList;

    public:
    Graph(int vertices)
    {
        V= vertices;
        adjacencyList.resize(V);
    }

    void addEdge(int u,int v)
    {
        adjacencyList[u].push_back(v);
        adjacencyList[v].push_back(u); // need not mention this for directed graph
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

int main()
{
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,3);

    g.print();
}
