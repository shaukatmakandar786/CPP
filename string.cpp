#include<string.h>
#include<iostream>
using namespace std;

int main()
{
    
    char s1[30]="abcdmadampqr";
    char s2[30]="mada";
    int count;
    int m=strlen(s1);
    int n=strlen(s2);
    int i;
    //firstloop:
    for( i=0;i<=m-n;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(s1[j+i]==s2[j])
            {
                count++;
            }
            else
            {
                break;
            }
            if(count==n)
            {
                cout<<"string is present\n";
                goto last;
            }
            
        }
    }
    last:
    if(count!=n)
    {
        cout<<"string is not present\n";
    }
    
    return 0;
}