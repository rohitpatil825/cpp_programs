#include<iostream>
using namespace std;
class ODemo
{
    int x,y,z;
    public:
        ODemo(int,int,int);
        void display();
        void operator -();
};
ODemo::ODemo(int a,int b,int c)
{
    x=a;
    y=b;
    z=c;
}
void ODemo::display()
{
    cout<<"\n x = "<<x
        <<"\n y = "<<y
        <<"\n z = "<<z;
}
void ODemo::operator-()
{
    x=-x;
    y=-y;
    z=-z;
}
int main()
{
    ODemo d(10,20,30);
    cout<<"\n before overloading ";
    d.display();
    -d;
    cout<<"\n after overloading ";
    d.display();
    return 0;
}