#include<iostream>

using namespace std;

int f1(double);
void f1(float*);
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
void f1(float *y)
{
    cout<<"hiiii\n";
}

// hello
// here also compiler doing type conversion
