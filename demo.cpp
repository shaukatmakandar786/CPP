#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;

void reverse(char *p,int f,int l)
{
    char temp;
    if(f>l)
    {
        return;
    }
    else
    {
        temp=p[f];
        p[f]=p[l];
        p[l]=temp;
        f++;l--;
        reverse(p,f,l);
    }
}
int main(int argc, char const *argv[])
{
    
    char s[30];
    cout<<"enter some string\n";
    gets(s);
    cout<<"display string before reverse ";
    puts(s);

    int len=strlen(s);
    reverse(s,0,len-1);
    cout<<"display after reverse ";

    puts(s);

    return 0;
}


