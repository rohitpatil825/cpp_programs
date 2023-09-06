#include<iostream>
using namespace std;
class Swap
{
    int x,y;
    public:
        void swap(Swap &z)
        {
            int c;
            c=x;
            x=y;
            y=c;
        }
        void show()
        {
            cout<<"\n x="<<x
                <<"\n y="<<y;
        }
        void input()
        {
            cout<<"\n enter a two no : ";
            cin>>x>>y;
        }
};
int main()
{
    Swap ob1;
    ob1.input();
    cout<<"\n after swap ";   
    ob1.show();
    ob1.swap(ob1);
    cout<<"\n before swap : ";
    ob1.show();
    return 0;
}