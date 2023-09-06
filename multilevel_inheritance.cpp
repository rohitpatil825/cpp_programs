#include<iostream>
using namespace std;
class A
{
    protected:
        int x;
    public:
        void inputA()
        {
            cout<<"\n enter a first no: ";
            cin>>x;
        }
        void showA()
        {
            cout<<"\n value of x = "<<x;
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
            cout<<"\n value of Y= "<<y;
        }
};
class C:public B
{
        int z;
    public:
        void sum()
        {
            z=x+y;
            cout<<"\n sum of "<<x<<" and "<<y<<" is "<<z;
        }
    
};
int main()
{
    C ob;
    ob.inputA();
    ob.inputB();
    ob.showA();
    ob.showB();
    ob.sum();
    return 0;
}