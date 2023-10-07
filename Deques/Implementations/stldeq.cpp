#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1); //insert last
    d.pop_back(); //remove last
    d.push_front(3); //insert front
    d.at(1); //get
    d.front(); //front
    d.back(); //back
    d.empty(); //check
    d.erase(d.begin(),d.end()); //delete

}