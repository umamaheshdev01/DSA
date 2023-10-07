#include <bits/stdc++.h>
using namespace std;

class Array{

    
    private:
    //values
        int size;
        int  *A;
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

    //get
    int get(int i)
    {
        if(i<index && i>-1)
        {
             return A[i];
        }

        cout<<"The index doesnt exist at all";

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

    //length
    int length()
    {
        return index;
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
    void reverseArray(int i,int j)
    {
        
        while(i<j)
        {
            swap(A[i++],A[j--]);
        }
    }

    //Rotate right
    void rotateRight(int i)
    {
         reverseArray(0,index-1);
         reverseArray(0,i-1);
         reverseArray(i,index-1);
    }

    //Rotate left
    void rotateLeft(int i)
    {
         reverseArray(0,index-1);
         reverseArray(0,index-i-1);
         reverseArray(index-i,index-1);
    }
    
    //Print all subarrays
    void printSubArrays()
    {
        if(index==0)
        {
            cout<<"Empty Array";
        }

        for(int i=0;i<index;i++)
        {
            for(int j=i;j<index;j++)
            {
                 for(int k=i;k<=j;k++)
                 {
                    cout<<A[k]<<" ";
                 }

                 cout<<endl;
            }
        }
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
    
    arr.printSubArrays();

    

}