#include<iostream>
#include<list>
using namespace std;

int main()
{

    list <int>l1{10,20,30,40,50};
    list <string>l2{"pune","mumbai","hydrabad"};

    list <int>::iterator p=l1.begin();

    while (p!=l1.end())
    {
        cout<<*p<<" ";
        p++;
    }
    cout<<endl;
    cout<<"total values in the list are"<<l1.size()<<endl<<endl;
    

    l2.push_back("Nasik");
    l2.push_front("Solapur");

    list <string>::iterator q=l2.begin();
    while(q!=l2.end())
    {
        cout<<*q<<" ";
        q++;
    }
    cout<<endl;
    cout<<"total values in the list are"<<l2.size()<<endl<<endl;

    l1.pop_back();
    l1.pop_front();

    list <int>::iterator l=l1.begin();
    while (l!=l1.end())
    {
        cout<<*l<<" ";
        l++;
    }
    cout<<endl;
    cout<<"total values in the list are"<<l1.size()<<endl<<endl;

    list <int>l3{9,8,7,6,5,4,3,2,1};

    list <int>::iterator m=l3.begin();

    while (m!=l3.end())
    {
        cout<<*m<<" ";
        m++;
    }
    cout<<endl;

    l3.sort();
    list <int>::iterator n=l3.begin();

    while (n!=l3.end())
    {
        cout<<*n<<" ";
        n++;
    }
    cout<<endl;

    l3.reverse();
    list <int>::iterator o=l3.begin();
    while (o!=l3.end())
    {
        cout<<*o<<" ";
        o++;

    }
    cout<<endl;

    l3.clear();
    list <int>::iterator k=l3.begin();
    while (k!=l3.end())
    {
        cout<<*k<<" ";
        k++;

    }
    cout<<endl;

    cout<<"program end\n";

    return 0;
}



// 10 20 30 40 50 
// total values in the list are5

// Solapur pune mumbai hydrabad Nasik 
// total values in the list are5

// 20 30 40 
// total values in the list are3

// 9 8 7 6 5 4 3 2 1 
// 1 2 3 4 5 6 7 8 9 
// 9 8 7 6 5 4 3 2 1 

// program end
