#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a[]={2,2,2,2,1,3,3,3,3,1,1,1,1,1};

    int ccount,mcount=0, res;
    for(int i=0;i<15;i++)
    {
        ccount=0;
        for(int j=0;j<15;j++)
        {
            if(a[i]==a[j])
            {
                ccount++;
            }
        }
        
         if(ccount>mcount)
        {
            mcount=ccount;
            res=a[i];
        }
        else if(ccount==mcount)
        {
            if(a[i]>res)
            {
                res=a[i];
            }
        }
    }
    cout<<"maximum frequent number is "<<res;
    cout<<"frequency is  "<<mcount<<"\n";
    return 0;
}
