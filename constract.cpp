#include<iostream>
using namespace std;
class cdemo
{
    private:
        int x,y;
    public:
        void show()
        {
            cout<<"\n first no : "<<x
                <<"\n second no : "<<y;
        }
        cdemo()
        {
            x=5;
            y=10;
        }
        cdemo(int a,int b)
        {
            x=a;
            y=b;
        }
        cdemo(cdemo &z)
        {
            x=z.x;
            y=z.y;
        }
        void input()
        {
            cout<<"\n enter a two no : ";
            cin>>x>>y;
        }
        void dosum()
        {
            cout<<"\n sum of "<<x<<" and "<<y<<" is "<<x+y;
        }

};
int main()
{
    cdemo ob1(12,38),ob2,ob3(ob1),ob4;
    cout<<"\n using ob data";
    ob1.show();
    ob1.dosum();
    cout<<"\n using ob2 data";
    ob2.show();
    ob2.dosum();
    cout<<"\n using ob3 data";
    ob3.show(); 
    ob3.dosum();
    cout<<"\n using ob4 data";
    ob4.input();
    ob4.show();
    ob4.dosum();
    return 0;
}