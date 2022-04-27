// if we want to store more than two values as a pair then we gor for tuple.because we can store only 2 values in pair

#include<iostream>
#include<tuple>
using  namespace std;

int main()
{
    tuple <string,int,int>t1;
    t1=make_tuple("shaukat",25,7);
    cout<<get<0>(t1)<<" ";
    cout<<get<1>(t1)<<" ";
    cout<<get<2>(t1)<<" ";
    cout<<endl;
    return 0;
}

// shaukat 25 7
