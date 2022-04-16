#include<iostream>

using namespace std;

class A1
{
    public:
    void f1(){
        cout<<"A1-f1()";
    }
};
class A2
{
    public:
    void f1(int x){
        cout<<"A2-f1()";
    }
};
class B: public A1,public A2{
    public:
   
};
int main()
{
    B o;
    o.f1();
    o.f1(3);
}

// error: request for member ‘f1’ is ambiguous
