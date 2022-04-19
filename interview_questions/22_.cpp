#include<iostream>

using namespace std;

class A{

   int a;
   A(int x)
   {
       a=x;
   }
   public:
   void show()
   {
       cout<<"a="<<a;
   } 
   friend void f1();
   
};
void f1()
{
    A obj(5);
    obj.show();
}
int main()
{
    f1();
}

// a=5
