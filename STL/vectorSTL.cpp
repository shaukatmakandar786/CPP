#include<iostream>
#include<vector>
using  namespace std;

int main()
{
    vector <int>v1;
    
    cout<<"size of vector is "<<v1.size()<<endl;
    cout<<"capacity of vector is "<<v1.capacity()<<endl;

    vector <int>v2{10,20,30};
    cout<<"size of vector is "<<v2.size()<<endl;
    cout<<"capacity of vector is "<<v2.capacity()<<endl;

    vector <int> v3(4);
    cout<<"size of vector is "<<v3.size()<<endl;
    cout<<"capacity of vector is "<<v3.capacity()<<endl;

    for(int i=0;i<v3.size();i++)
    {
        cout<<v3.at(i)<<" ";
    }
    cout<<endl;

    vector <int> v4(4,10);
    for(int i=0;i<v4.size();i++)
    {
        cout<<v4.at(i)<<" ";
    }
    cout<<endl;

    vector <int> v5;
    cout<<"Current capacity is "<<v5.capacity()<<endl;
    v5.push_back(10);
    cout<<"Current capacity is "<<v5.capacity()<<endl;
    v5.push_back(20);
    cout<<"Current capacity is "<<v5.capacity()<<endl;
    v5.push_back(30);
    cout<<"Current capacity is "<<v5.capacity()<<endl;
    v5.push_back(40);
    cout<<"Current capacity is "<<v5.capacity()<<endl;

    vector <int> v6;
   
    for(int i=0;i<10;i++)
    {
        v6.push_back(10*(i+1));
    }
    cout<<"Current capacity is "<<v6.capacity()<<endl;
    cout<<"Current size is "<<v6.size()<<endl;

    v6.pop_back();
    cout<<"after pop\n";
    cout<<"Current capacity is "<<v6.capacity()<<endl;
    cout<<"Current size is "<<v6.size()<<endl;

    v6.pop_back();
    cout<<"after pop\n";
    cout<<"Current capacity is "<<v6.capacity()<<endl;
    cout<<"Current size is "<<v6.size()<<endl;

    v6.pop_back();
    cout<<"after pop\n";
    cout<<"Current capacity is "<<v6.capacity()<<endl;
    cout<<"Current size is "<<v6.size()<<endl;

    v6.pop_back();
    cout<<"after pop\n";
    cout<<"Current capacity is "<<v6.capacity()<<endl;
    cout<<"Current size is "<<v6.size()<<endl;
    
    cout<<"first value is "<<v6.front()<<endl;;
    cout<<"last value is "<<v6.back()<<endl;

    vector <int>:: iterator it=v6.begin();
    v6.insert(it+2,35);

    for(int i=0;i<v6.size();i++)
    {
        cout<<v6[i]<<" ";
    }
    cout<<endl;
    v6.clear();
    cout<<"after clear\n";
    cout<<"Current capacity is "<<v6.capacity()<<endl;
    cout<<"Current size is "<<v6.size()<<endl;

    
    return 0;
}
// size of vector is 0
// capacity of vector is 0
// size of vector is 3
// capacity of vector is 3
// size of vector is 4
// capacity of vector is 4
// 0 0 0 0 
// 10 10 10 10 
// Current capacity is 0
// Current capacity is 1
// Current capacity is 2
// Current capacity is 4
// Current capacity is 4
// Current capacity is 16
// Current size is 10
// after pop
// Current capacity is 16
// Current size is 9
// after pop
// Current capacity is 16
// Current size is 8
// after pop
// Current capacity is 16
// Current size is 7
// after pop
// Current capacity is 16
// Current size is 6
// first value is 10
// last value is 60
// 10 20 35 30 40 50 60 
// after clear
// Current capacity is 16
// Current size is 0
