#include<iostream>

using namespace std;

class A
{
    public:
    int a;
    void f1()
    {
        cout<<"A\n";
    }
};
class B1:public virtual A
{
    public:
    int b1;
    void f2()
    {
        cout<<"B1\n";
    }
};

class B2:public virtual A
{
    public:
    int b2;
    void f3()
    {
        cout<<"B2\n";
    }
};
class C:public B1,public B2
{
    public:
    int c;
    void f4()
    {
        cout<<"C\n";
    }

};

int main()
{
    C o;
    o.B1::a=10;
    cout<<o.B2::a<<endl;
   
    return 0;
}
// 10
