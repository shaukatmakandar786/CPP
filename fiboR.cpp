#include<iostream>
using namespace std;
int fib(int);
int main(int argc, char const *argv[])
{
    int n,x;
    cout<<"enter how many times fibonacci series you wnt to see\n";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<fib(i)<<" ";
    }
    return 0;
}
int fib(int n)
{
    int res;
    if(n==0)
        return 0;
    else if(n==1||n==2)
        return 1;
    else
    {
        res=(fib(n-1)+fib(n-2));
        return res;
    }
}