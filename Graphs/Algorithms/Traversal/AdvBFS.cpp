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

void BFS(Graph g,int start,vector<bool> &visited)
{

      queue<int> q;

      visited[start] = true;
      q.push(start);

      while(!q.empty())
      {
        int cur = q.front();
        cout<<cur<<" ";
        q.pop();

        for(auto neighbour:g.adjacencyList[cur])
        {
            if(!visited[neighbour])
            {
                visited[neighbour]=true;
                q.push(neighbour);
            }
        }
      }
      
}

void mainBFS(Graph g)
{
    vector<bool> visited(g.V,false);
    for(int i=0;i<g.V;i++)
    {
        if(!visited[i])
        {
            BFS(g,i,visited);
        }
    }
}

int main()
{
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,3);

    g.print();
    mainBFS(g);
}
