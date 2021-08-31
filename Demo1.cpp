#include<iostream>
using namespace std;

class A
{
	public:
		fun(){
			cout<<"A fun";
		}
};
class B
{
	public:
		fun(){
			cout<<"B fun";
		}
};
class C :public A,public B
{
	
};

int main()
{
	C obj;
	obj.fun();
	return 0;
}
