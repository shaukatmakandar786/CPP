#include<iostream>

using namespace std;

int f1(double);
void f1(float);
int main()
{
    char c='A';
    f1(c);
    
}
int f1(double x)
{
    cout<<"hello\n";
    return 9;
}
void f1(float y)
{
    cout<<"hiiii\n";
}

// error: call of overloaded ‘f1(char&)’ is ambiguous
// here compiler is doing type conversion
