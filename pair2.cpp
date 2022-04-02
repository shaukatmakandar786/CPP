#include<iostream>

using namespace std;

void findPair(int [],int,int);
int main()
{

    int a[]={2,5,7,10,13};
    int target=100;
    int n=sizeof(a)/sizeof(a[0]);

    findPair(a,target,n);
    return 0;
}

void findPair(int a[],int target,int n)
{
    int f=0;
    int l=n;
    int flag=0;
    while(f<l)
    {
        if(a[f]+a[l]==target)
        {
            cout<<a[f]<<" "<<a[l]<<endl;
            flag=1;
            break;
        }
        else if(a[f]+a[l]< target)
        {
            f++;
        }
        else if(a[f]+a[l]>target)
        {
            l--;
        }
    }
    if(flag==0)
    {
        cout<<"pair not available\n";
    }
   

}
