#include<iostream>

using namespace std;

class A{

   int a;
 
};
class B
{
    int b;
    A obj;
};

int main()
{
    cout<<sizeof(A)<<endl;
    cout<<sizeof(B)<<endl;
}
// 4
// 8
