#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> maxi; //Descending Order

    maxi.push(1); //push
    maxi.push(10);
    maxi.push(11);
    maxi.top(); //top
    maxi.pop();  //remove 

    priority_queue<int,vector<int>,greater<int>> mini; //Ascending Order


}