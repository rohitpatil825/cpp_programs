#include<iostream>
using namespace std; 
class A
{
    protected:
        int x;
    public:
        void inputA()
        {
            cout<<"\n enter a first no : ";
            cin>>x;
        }
        void showA()
        {
            cout<<"\n value of x= "<<x;
        }
};
class B:public A 
{
    protected:
        int y;
    public:
        void inputB()
        {
            cout<<"\n enter a second no : ";
            cin>>y;
        }
        void showB()
        {
            cout<<"\n value of y= "<<y;
        }
};
class C
{
    protected:
        int z;
    public:
         void inputc()
        {
            cout<<"\n enter a 3rd no : ";
            cin>>z;
        }
        void showc()
        {
            cout<<"\n value of z= "<<z;
        }
};
class D:public B,public C
{
    int t;
    public:
        void sum()
        {
            t=x+y+z;
            cout<<"\n sum of "<<x<<" and "<<y<<" and "<<z<<" is "<<t;
        }
};
int main()
{
    D ob;
    ob.inputA();
    ob.inputB();
    ob.inputc();
    ob.showA();
    ob.showB();
    ob.showc();
    ob.sum();
    return 0;
}
 
