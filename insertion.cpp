#include <iostream>

using namespace std;

void sort(int[],int);
int main()
{
    
    int a[]={5,4,3,2,1};
    int n=sizeof(a)/sizeof(a[0]);
    sort(a,n);

    return 0;
}
void sort(int a[],int n)
{
    int temp,k;
    
    for(int i=0;i<=n-2;i++)
    {
        for(int j=1+i;j<=n-1;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
               for(k=j;k>i;k--)
               {
                   a[k]=a[k-1];
               }
               a[k+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
