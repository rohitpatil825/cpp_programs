#include<iostream>
using namespace std;
class A
{
    protected:
        int x;
    public:
        void inputA()
        {
            cout<<"\n enter a first no :";
            cin>>x;
        }
        void showA()
        {
            cout<<"\n value of x= "<<x;
        }
};
class B:public A
{
         int y,t;
    public:
        void inputB()
        {
            cout<<"\n enter a second no : ";
            cin>>y;
        }
        void showB()
        {
            cout<<"\n value of y ="<<y;
        }
        void sum()
        {
            t=x+y;
            cout<<"\n sum of "<<x<<" and "<<y<<" is "<<t;
        }
};
class c:public A
{
        int z,t;
    public:
        void inputC()
        {
            cout<<"\n enter a third no :";
            cin>>z;
        }
        void showC()
        {
            cout<<"\n value of z="<<z;
        }
         void sum()
        {
            t=x+z;
            cout<<"\n sum of "<<x<<" and "<<z<<" is "<<t;
        }
};

int main()
{
    B ob1;
    c ob2;
    ob1.inputA();
    ob1.inputB();
    ob1.showA();
    ob1.showB();
    ob1.sum();
    ob2.inputA();
    ob2.inputC();
    ob2.showA();
    ob2.showC();
    ob2.sum();
    return 0;
}