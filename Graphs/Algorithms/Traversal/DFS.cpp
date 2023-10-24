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

vector<bool> visited(5,false);
void DFS(int start,Graph g)
{
     visited[start] = true;
     cout<<start<<" ";

     for(auto x:g.adjacencyList[start])
     {
        if(!visited[x])
        {
            DFS(x,g);
        }
     }
}

void DFS2(int start,Graph g)
{
    vector<bool> visited(g.V,false);
    stack<int> s;

    s.push(start);

    while(!s.empty())
    {
        int cur = s.top();
        s.pop();

        if(!visited[cur])
        {
            cout<<cur<<" ";
            visited[cur]=true;
        }

        for(auto x:g.adjacencyList[cur])
        {
            if(!visited[x])
            {
                s.push(x);
            }
        }
    }


}

int main()
{
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,3);

    g.print();
    DFS(0,g);
}
