#include<iostream>

using namespace std;

int f1(int);
void f1(float);
int main()
{
    char c='A';
    f1(c);
    
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
// here compiler doing type promotion for overloading
// type promotion is possible with char to int and float to double 
