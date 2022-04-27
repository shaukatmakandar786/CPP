#include<iostream>
#include<array>

using  namespace std;
class Student
{
    string name;
    int age;

    public:
        void setStudent(string s,int a)
        {
            name=s;
            age=a;
        }
        void showStudent()
        {
            cout<<"\nName: "<<name;
            cout<<"\nAge: "<<age;
        }

};
int main()
{
    pair <string,int>p1;
    pair <string,string>p2;
    pair <string,float>p3;
    pair <int,Student>p4;

    p1=make_pair("shaukat",25);
    p2=make_pair("India","New Delhi");
    p3=make_pair("C++",250.33f);
    Student s;
    s.setStudent("Zakir",26);
    p4=make_pair(101,s);

    cout<<"\nPair 1";
    cout<<"\n"<<p1.first<<"\t"<<p1.second;

    cout<<"\nPair 2";
    cout<<"\n"<<p2.first<<"\t"<<p2.second;

    cout<<"\nPair 3";
    cout<<"\n"<<p3.first<<"\t"<<p3.second;

    cout<<"\nPair 4";
    cout<<"\n"<<p4.first<<"\t";
    Student s1=p4.second;
    s1.showStudent();
    cout<<endl;
    return 0;
}

// Pair 1
// shaukat 25
// Pair 2
// India   New Delhi
// Pair 3
// C++     250.33
// Pair 4
// 101
// Name: Zakir
// Age: 26
