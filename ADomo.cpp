#include<iostream>
using namespace std;
class ADemo
{
    int x,y;
    public:
        void show()
        {
            cout<<"\n x="<<x<<
            "\n y="<<y;
        }
        void setvalue()
        {
            x=5;
            y=10;
        }
        void setvalue(int a,int b)
        {
            x=a;
            y=b;
        }
        void setvalue(ADemo &z)
        {
            x=z.x;
            y=z.y;
        }
};
int main()
{
    ADemo ob1,ob2,ob3;
    cout<<"\n usind ob1 data :";
    ob1.setvalue();
    ob1.show();
    cout<<"\n usind ob2 data :";
    ob2.setvalue(100,50);
    ob2.show();
    cout<<"\n usind ob3 data :";
    ob3.setvalue(ob2);
    ob3.show();
    return 0;
}