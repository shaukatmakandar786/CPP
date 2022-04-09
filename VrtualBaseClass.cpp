#include<iostream>

using namespace std;

class A
{
    public:
    void f1()
    {
        cout<<"A\n";
    }
};
class B1:public virtual A
{
    public:
    void f2()
    {
        cout<<"B1\n";
    }
};

class B2:public virtual A
{
    public:
    void f3()
    {
        cout<<"B2\n";
    }
};
class C:public B1,public B2
{
    public:
    void f4()
    {
        cout<<"C\n";
    }

};

int main()
{
    A a1;
    a1.f1();

    B1 b1;
    b1.f2();
    b1.f1();

    B2 b2;
    b2.f3();
    b2.f1();

    C c;
    c.f4();
    c.f3();
    c.f2();
    c.f1();
    return 0;
}

A
B1
A
B2
A
C
B2
B1
A
