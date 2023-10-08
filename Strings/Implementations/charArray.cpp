#include <bits/stdc++.h>
using namespace std;

int length(char * a)
{
    int i=0;
    for(;a[i]!='\0';i++);
    return i;
}

void Concat(char *a,char *b)
{
   int k=length(a);
     
   int i;
   for(i=0;b[i]!='\0';i++)
   {
     a[i+k]=b[i];
   }

   a[i+k]='\0';
}

int main()
{
    char a[100]={'u','m','a'};  //extra for null char 
    char b[2]={'o'};

    strlen(a); //length
    strcpy(a,b); //b-->a
    strcat(a,b); //b=b+a
    strchr(a,'o');  //index of char
    strstr(a,"Hi"); //index of string

}