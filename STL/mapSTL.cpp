#include<iostream>
#include<map>
using namespace std;

int main()
{
    map <int,string>customer;
    
    customer[100]="shaukat";
    customer[99]="zahid";
    customer[101]="Sanchita";
    customer[102]="Gokul";

    map <int,string>c{{100,"shaukat"},{99,"wasim"},{104,"Wajid"}};

    cout<<customer[99]<<endl<<endl<<endl;

    map <int,string>::iterator p=customer.begin();

    while (p!=customer.end())
    {
        cout<<p->second<<endl;
        p++;
    }
    cout<<endl<<endl;

    customer.insert(pair<int,string>(108,"Arun"));

    map <int,string>::iterator q=customer.begin();
    while (q!=customer.end())
    {
        cout<<q->second<<endl;
        q++;
    }

    cout<<endl<<endl<<customer.at(102)<<endl;
    cout<<customer.size()<<endl;
    cout<<customer.empty()<<endl;
    return 0;
}


// zahid


// zahid
// shaukat
// Sanchita
// Gokul


// zahid
// shaukat
// Sanchita
// Gokul
// Arun


// Gokul
// 5
// 0
