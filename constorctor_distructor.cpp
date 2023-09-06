#include<iostream>
using namespace std;
class A
{
    public:
        A()
        {
            cout<<"\n constuctor";
        }
        ~A()
        {
            cout<<"\n Destroctor";
        }
};
int main()
{
    cout<<"\n object 1";
    A a,b;
    {
        cout<<"\nobject 2";
        A c;
    }
    return 0;
}