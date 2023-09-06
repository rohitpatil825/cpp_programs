#include<iostream>
using namespace std;
class BDemo
{
    int x;
    public:
        BDemo();
        BDemo(int);
        BDemo(BDemo &);
        void input();
        void show();
        void sum(BDemo &);
};
 BDemo::BDemo()
{
    x=5;
}
 BDemo::BDemo(int a)
{
    x=a;
}
BDemo::BDemo(BDemo &z)
{
    x=z.x;
}
void BDemo::input()
{
    cout<<"\n enter  a no : ";
    cin>>x;
}
void BDemo::show()
{
    cout<<"\n x = "<<x;
}
void BDemo::sum(BDemo &a)
{
    cout<<"\n sum = "<<x+a.x;
}
int main()
{
    BDemo ob1,ob2(10);
    cout<<"\n ob1 data ";
    ob1.show();
    cout<<"\n ob2 data ";
    ob2.show();
    ob1.sum(ob2);
    return 0;
}