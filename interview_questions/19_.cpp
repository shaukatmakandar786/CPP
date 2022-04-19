#include<iostream>

using namespace std;

class A{

    public:
        int a;

};
class B:public A
{
    public:
        int b;
};
int main()
{
    B o1;
    o1.a=10;
    o1.b=20;

    A o2;
    o2=o1;
    cout<<o2.a<<endl;

    // o1=o2; this is not possible this statement through an error
    // cout<<o2.a<<endl;

   
}
