#include<iostream>
using namespace std;
class UDemo
{
    int x,y,z;
    public:
        UDemo(int,int,int);
        void display();
        friend void operator++(UDemo &d);
};
UDemo::UDemo(int a,int b,int c)
{
    x=a;
    y=b;
    z=c;
}
void UDemo::display()
{
    cout<<"\n x = "<<x
        <<"\n y = "<<y
        <<"\n z = "<<z;
}
void operator++(UDemo &d)
{
    d.x++;
    d.y++;
    d.z++;
}
int main()
{
    UDemo ob(10,20,30);
    cout<<"\n before overrloading ";
    ob.display();
    ++ob;
    cout<<"\n after overloading ";
    ob.display();
    return 0;
}