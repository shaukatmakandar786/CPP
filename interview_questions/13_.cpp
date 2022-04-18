#include<iostream>

using namespace std;

class A
{
    public:
    static class A1
    {
        public:
            int x;
            A1()
            {
                x=10;
            }
    };
    A1 obj;

};

int main()
{
    A o;
    cout<<o.obj.x;
    
}
// error: a storage class can only be specified for objects and functions
// we cant make class with static key word
