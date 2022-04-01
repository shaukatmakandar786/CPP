#include <iostream>
#include<string.h>
using namespace std;

void reverse(char a[],int ,int);
int main()
{
    char s1[30]="Hello";
    int f=0;
    int l=strlen(s1)-1;
    cout<<"before reverse "<<s1<<endl;
    reverse(s1,f,l);
    cout<<"after reverse "<<s1<<endl;
    return 0;
}

void reverse(char a[],int f,int l)
{
    char temp;
    if(f>=l)
    {
      return;  
    }
    else
    {
        reverse(a,f+1,l-1);
        temp=a[f];
        a[f]=a[l];
        a[l]=temp;
    }
}

//before reverse hello
//after reverse hello

