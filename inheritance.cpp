#include<iostream>
using namespace std;
class A
{
    protected:
        int x,y;
    public:
        void inputA()
        {
            cout<<"\n enter a two no : ";
            cin>>x>>y;
        }
        void showA()
        {
            cout<<"\n first no = "<<x<<
                "\n second no = "<<y;
        }
};
class B:public A
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
    B ob;
    ob.inputA();
    ob.showA();
    ob.sum();  
    return 0;
}