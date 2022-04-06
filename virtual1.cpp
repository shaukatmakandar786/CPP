// To do function late binding we can use virtual function..

class A{
    
    public:
   virtual  void f1()
    {
        cout<<"A:f1()\n";
    }
    void f2()
    {
        cout<<"A:f2()\n";
    }
};


class B:public A{
    
    public:
   void f1()
    {
        cout<<"B:f1()\n";
    }
    void f3()
    {
        cout<<"B:f3()\n";
    }
};


int main()
{
    A o1,*p1;
    
    A *p=new A;
    
    // o1.f1();//EB
    // o1.f2();//EB
    
    // p1=&o1;
    // p1->f1();
    // p1->f2();
    
    B o2,*p2;
    // o2.f1();//EB
    // o2.f2();//EB
    // o2.f3();//EB
    
    // p2=&o2;
    // p2->f1();
    // p2->f2();
    // p2->f3();
    
    
    p1=&o2;
    p1->f1();//LB
    p1->f2();//EB
    // p1->f3();//EB
    
    return 0;
}
