#include<iostream>

using namespace std;

void findPair(int [],int);
int main()
{

    int a[]={2,5,7,10,13};
    int target=12;
    findPair(a,target);
    return 0;
}

void findPair(int a[],int target)
{
    int i,j,n;
    // n=(int)sizeof(a)/sizeof(int);

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i!=j && a[i]+a[j]==target)
            {
                cout<<"pair available for "<<target<<endl;
                goto last;
            }
        }
    }
    last:
    if(i==5)
    {
        cout<<"pair not available for  "<<target<<endl;
    }

}
