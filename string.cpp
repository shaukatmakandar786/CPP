#include<string.h>
#include<iostream>
using namespace std;

int main()
{
    
    char s1[30]="abcdmadampqr";
    char s2[30]="madam";
    int count;
    int m=strlen(s1);
    int n=strlen(s2);
    
    //firstloop:
    for(int i=0;i<=m-n;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(s1[j+i]==s2[j])
            {
                count++;
            }
            if(count==n)
            {
                cout<<"string is present\n";
                goto last;
            }
            else{
                continue;
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