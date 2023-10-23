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
void bubbleSort(vector<int> &A)
{
    int n= A.size();

    for(int i=0;i<n;i++)
    {
        bool flag = true;
        for(int j=0;j<n-i;j++)
        {
            if(A[j]>A[j+1])
            {
                swap(A[j],A[j+1]);
                flag = false;
            }
        }

        if(flag) break;
    }
}

//Selection Sort
void selectionSort(vector<int> &A)
{
    int n=A.size();

    for(int i=0;i<n-1;i++)
    {
        int mini=i;

        for(int j=i+1;j<n;j++)
        {
            if(A[j]<A[mini])
            {
                mini=j;
            }
        }

        swap(A[i],A[mini]);

    }
}

int main()
{
     vector<int> k;
}