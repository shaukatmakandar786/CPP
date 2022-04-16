#include<iostream>

using namespace std;

int f1(int);
void f1(float);
int main()
{
    int y=f1(4);
    f1(3.4f);
    
}
int f1(int x)
{
    cout<<"hello\n";
    return 9;
}
void f1(float y)
{
    cout<<"hiiii\n";
}

// hello
// hiiii
// here compiler doing exact match for overloading
