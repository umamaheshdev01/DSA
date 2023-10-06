#include <bits/stdc++.h>
using namespace std;

class Array{

    
    private:
    //values
        int size;
        int * A;
        int index=0;
    
    public:
    //constructor
    Array(int x)
    {
        size=x;
        A = new int[x];
    }

    //Insertion
    void insert(int x)
    {
        if(index>=size)
        {
            cout<<"Overflow"<<endl;
        }
        else
        {
            A[index++] = x;
        }
    }

    //Display
    void display()
    {
        if(index==0)
        {
            cout<<"Array is empty"<<endl;
            return;
        }

        for(int i=0;i<index;i++)
        {
            cout<<A[i]<<" ";
        }

        cout<<endl;
    }

    //Linear Search
    void linearSearch(int x)
    {
        for(int i=0;i<index;i++)
        {
            if(A[i]==x)
            {
                cout<<"The element found at index "<<i<<endl;
                return;
            }
        }

        cout<<"Element not found"<<endl;
    }

    //Sort Array
    void sortArray()
    {
        sort(A,A+index);
    }


    //Binary Search
    void binarySearch()
    {
        this->sortArray();
    }



};

int main()
{
    Array arr(10);
    arr.display();

}