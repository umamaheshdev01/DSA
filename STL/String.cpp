#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s="Hi";
    string s2="Bye";

    s.append(s2);
    s=s+s2;   //concat

    s.length();
    s.erase(s.begin());
    s.push_back('o');
    s.pop_back();
    s.at(1);
    s.back();   //all stl functions
}