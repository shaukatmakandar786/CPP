// array

#include<iostream>
#include<array>

using  namespace std;
int main()
{
    array <int,5> a={11,22,33,44,55};
    array <int,5> a1={1,2,3,4,5};

    cout<<a.at(2)<<endl;
    cout<<a[4]<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;

    a.fill(10);
    for (size_t i = 0; i < 5; i++)
    {
        cout<<a[i]<<"  ";
    }
     cout<<endl;
    a.swap(a1);
    for (size_t i = 0; i < 5; i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;

    for (size_t i = 0; i < 5; i++)
    {
        cout<<a1[i]<<"  ";
    }

    cout<<"\nsize is "<<a.size()<<endl;
    return 0;
}


// 33
// 55
// 11
// 55
// 10  10  10  10  10  
// 1  2  3  4  5  
// 10  10  10  10  10  
// size is 5
