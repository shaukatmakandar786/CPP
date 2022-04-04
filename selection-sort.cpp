#include <iostream>

using namespace std;

int main()
{
    int a[]={32,24,11,19,16};
    
    int n=sizeof(a)/sizeof(a[0]);
    
    int temp;
    
    cout<<"before sorting \n";
    
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl<<endl;
    }
    for(int i=0;i<=n-2;i++)
    {
        for(int j=1+i;j<=n-1;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
    cout<<"after sorting \n";
    
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl<<endl;
    }
    
    return 0;
}
