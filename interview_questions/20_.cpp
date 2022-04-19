#include<iostream>

using namespace std;

class A{

    public:
        int a;

    friend void f1(A;
     

};
class B:public A
{
    public:
        int b;
};
void f1(A o1)
{
    cout<<o1.a<<endl<<o1.b;
    // cout<<o1.a ;          this is valid statement
}
int main()
{
   B obj;
   obj.a=10;
   obj.b=20;

   f1(obj);

   
}

//  error: ‘class A’ has no member named ‘b’
