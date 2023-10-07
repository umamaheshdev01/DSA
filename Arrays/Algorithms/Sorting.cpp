#include <bits/stdc++.h>
using namespace std;

//Insertion Sort
void insertionSort(vector<int> &k)
{
    int n=k.size();

    for(int i=1;i<n;i++)
    {
        int x  = k[i];
        int j = i-1;
        
        while(j>-1 && x<k[j])
        {
            k[j+1]=k[j];
            j--;
        }

        k[j+1]=x;
    }

}

//Bubble Sort
void bubbleSort(vector<int> A)
{
    
}

int main()
{
     vector<int> k;
}