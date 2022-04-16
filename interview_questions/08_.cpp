#include<iostream>

using namespace std;

int f1(int);
void f1(int);
int main()
{
    int y=f1(4);
    
}
int f1(int x)
{
    cout<<"hello\n";
    return 9;
}
void f1(int y)
{
    cout<<"hiiii\n";
}

// error: ambiguating new declaration of ‘void f1(int)
