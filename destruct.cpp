#include<iostream>
using namespace std;
class A
{
    public:
        A()
        {
            cout<<"\n contruct called";

        }
        ~A()
        {
            cout<<"\n distructor calls";
        }
};
int main()
{
    A ob1;
    cout<<"\n object 1 ";
    int x=1;
    if(x==1)
    {
        A ob2;
        cout<<"\n object 2";
    }    
    return 0;
}