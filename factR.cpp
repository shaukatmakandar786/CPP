#include<iostream>

using namespace std;

int fact(int);
int main(int argc, char const *argv[])
{
    int n,x;
    cout<<"enter the value of n\n";
    cin>>n;
    x=fact(n);
    cout<<"factorial of "<<n<<" is "<<x<<endl;
    return 0;
}
int fact(int a)
{
    int res;
    if(a==1)
    {
        return a;
    }
    else{

        res=(a*fact(a-1));
        return res;
    }
}
