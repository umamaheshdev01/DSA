#include <bits/stdc++.h>
using namespace std;

class Array{

    //values
    private:
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
            cout<<"Array is empty";
            return;
        }

        for(int i=0;i<index;i++)
        {
            cout<<A[i]<<" ";
        }

        cout<<endl;
    }

};

int main()
{
    Array arr(10);
    arr.display();

}