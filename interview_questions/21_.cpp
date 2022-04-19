#include<iostream>

using namespace std;

class A{

   int a;
   A(int x)
   {
       a=x;
   }
   void show()
   {
       cout<<a;
   } 

};

int main()
{
  A o1(5);
  o1.show();
   
}

// error: ‘A::A(int)’ is private within this context
