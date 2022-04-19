#include<iostream>

using namespace std;

class Outer
{
    public:

        class Inner
        {
            public:
                void display()
                {
                    cout<<"Hello";
                }
        };
};
int main()
{
    Outer obj;
    // obj.Inner innerObj;
    innerObj.display();

    // Outer::Inner innerObj;
    // innerObj.display();
}

// error: ‘innerObj’ was not declared in this scope
