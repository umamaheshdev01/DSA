#include <bits/stdc++.h>
using namespace std;

class Graph{

    private:
    int V ; //No of vertices
    vector<vector<int>> adjacencyMatrix;

    public:
    Graph(int vertices)
    {
        V= vertices;
        adjacencyMatrix.resize(V,vector<int>(V,0));
    }

    void addEdge(int u,int v)
    {
        adjacencyMatrix[u][v] = 1;
        adjacencyMatrix[v][u] = 1; // need not mention this for directed graph
    }

    void print()
    {
        for(int i=0;i<V;i++)
        {
            cout<<"Adjacency list of vertex "<<i<<" : ";
            for(int j=0;j<V;j++)
            {
                if(adjacencyMatrix[i][j]==1)
                {
                    cout<<j<<" ";
                }
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
