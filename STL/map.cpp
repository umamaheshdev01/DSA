#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int,bool> m;
    unordered_map<int,string> m2;

    m[1]=true; //insertion
    m.insert({2,false}); //insertion
    m.erase(1); //delete
    m.find(1); //find
    
    

    for(auto x:m)
    {
        x.first; //acces key
        x.second; //acces value
    }



}