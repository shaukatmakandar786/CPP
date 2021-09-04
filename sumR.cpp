#include<iostream>
using namespace std;

int sum(int);
int main(int argc, char const *argv[])
{
    int ans;
    ans=sum(3);
    cout<<"sum of digit is"<<ans<<endl;

    return 0;
}
int sum(int a)
{
    int s;
    if(a==1)
    {
        return a;
    }
    else{
        s=a+sum(a-1);
        return s;
    }
}
