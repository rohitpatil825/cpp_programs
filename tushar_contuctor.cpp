#include<iostream>
using namespace std;
class SDemo
{
    int x;
    static int count;
    public:
        SDemo()
        {
            x=2;
            count ++;
            cout<<count<<" object created \n";

        }
        SDemo(int a)
        {
            x=a;
            count ++;
            cout<<count<<" object created\n";

        }
        SDemo(SDemo &o)
        {
            x=o.x;
            count ++;
            cout<<count<<" object created\n";

        }
        void show()
        {
            cout<<"\n x = "<<x;
        }
        static void showcount()
        {
            cout<<count<<" object crated in memory ";
        }
};
int SDemo::count=0;
int main()
{
    SDemo ob1(45),ob2,ob3(ob1);
    cout<<"\n object 1 ";
    ob1.show();
    cout<<"\n object 2 ";
    ob2.show();
    cout<<"\n object 3 ";
    ob3.show();
    cout<<"\n total object \n";
    SDemo::showcount();
    return 0;
}