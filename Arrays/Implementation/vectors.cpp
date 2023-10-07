#include <bits/stdc++.h>
using namespace std;

void print(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<endl;
}

void rotate(vector <int> &v,int i)
{
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+i);
    reverse(v.begin()+i,v.end());
}

int main()
{
    vector<int> v;
    vector<int> p(10); //size declared
    vector<int> f(10,0); //fill all with 0
    vector<int> k;
    k.push_back(1); //insertion
    k.push_back(3);
    k.push_back(10);
    k.pop_back();  //deletion
    k.size(); //size
    v.capacity(); //total capacity
    sort(k.begin(),k.end()); //sort
    reverse(k.begin(),k.end()); //reverse
    rotate(k,1); //rotation
    k.front(); //front
    k.back(); //last element
    k.empty(); //empty checkup
    k.at(2); //get
    cout<<*max_element(k.begin(),k.end());
    cout<<*min_element(k.begin(),k.end());

    //iteration
    for(auto x:k)
    {
        //code
    }

}