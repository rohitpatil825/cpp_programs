#include<iostream>
using namespace std;
class ADemo
{
    int x,y;
    public:
        void show()
        {
            cout<<"\n x="<<x
            <<"\t y="<<y;
        }
};
int main()
{
    ADemo ob1,ob2;
    cout<<"\n ob1 data : ";
    ob1.show();
    cout<<"\n ob2 data : ";
    ob2.show();
    return 0;
}