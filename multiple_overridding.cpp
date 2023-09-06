#include<iostream>
using namespace std;
class A
{
    protected:
        int x;
    public:
        void input()
        {
            cout<<"\n enter a first no: ";
            cin>>x;
        }
        void show()
        {
            cout<<"\n value of x= "<<x;
        }
};
class B
{
    protected:
        int y;
    public:
        void input()
        {
            cout<<"\n enter a second no: ";
            cin>>y;
        }
        void show()
        {
            cout<<"\n value of y= "<<y;
        }
};
class C:public A,public B
{
    int z;
    public:
        void input()
        {
            A::input();
            B::input();
        }
        void show()
        {
            A::show();
            B::show();
        }
        void sum()
        {
            z=x+y;
            cout<<"\n sum of "<<x<<" and "<<y<<" is "<<z;
        }
};
int main()
{
    C ob;
    ob.input();
    ob.show();
    ob.sum();  
    return 0;
}