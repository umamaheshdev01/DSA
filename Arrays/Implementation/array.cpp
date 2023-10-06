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
    int linearSearch(int x)
    {
        for(int i=0;i<index;i++)
        {
            if(A[i]==x)
            {
                cout<<"The element found at index "<<i<<endl;
                return i;
            }
        }

        cout<<"Element not found"<<endl;
        return -1;
    }

    //Sort Array
    void sortArray()
    {
        sort(A,A+index);
    }


    //Binary Search
    int binarySearch(int k)
    {
        //This works only when sorted
        sortArray();

        int low = 0;
        int high = index-1;

        while(low<=high)
        {
            int mid = (low+high)/2;

            if(A[mid]==k)
            {
                cout<<"The element found at index "<<mid<<endl;
                return mid;
            }
            else if(A[mid]>k)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }

        cout<<"The element not found"<<endl;
        return -1;
    }

    
    //Delete element
    void deleteElement(int x)
    {
        int ind = linearSearch(x);

        if(index==0)
        {
            cout<<"Underflow"<<endl;
            return;
        }

        if(index==-1)
        {
            cout<<"Element Not found"<<endl;
            return;
        }


        for(int i=ind;i<index-1;i++)
        {
            A[i]=A[i+1];
        }

        index--;
    }


    //Reverse Array
    void reverseArray()
    {
        
    }



};

int main()
{
    Array arr(10);
    arr.insert(33);
    arr.insert(10);
    arr.insert(11);
    arr.insert(21);
    arr.insert(1);
    arr.deleteElement(11);
    arr.display();

    

}