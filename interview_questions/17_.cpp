#include<iostream>

using namespace std;

class A
{
    int *p;
    public:
    A()
    {
            p=new int;
            *p=10;
    }
   virtual ~A()
    {
            delete p;
           cout<<"destroy location pointed by p\n";
    }
};

class B:public A
{
    int *q;
    public:
    B()
    {
            q=new int;
            *q=20;
    }
    ~B()
    {
            delete q;
           cout<<"destroy location pointed by q\n";
    }
};
void fun()
{
    A *ptr=new B;
    delete ptr;// here compiler is doing late binding because of virtual destructor thats why child class destructor is called and child destructor is internally called parent class des
}
int main()
{
   fun();
   
    return 0;
}

// destroy location pointed by q
// destroy location pointed by p
