#include <bits/stdc++.h>
using namespace std;

int linearSearch(int k,int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            return i;
        }
    }

    return -1;
}

int binarySearch(int k,int a[],int n)
{
    int l=0;
    int h=n-1;

    while(l<=h)
    {
        int mid=(l+h)/2;

        if(a[mid]==k)
        {
            return mid;
        }
        else if(a[mid]>k)
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }

    return -1;
}

int main()
{

}