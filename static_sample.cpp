#include<iostream>
using namespace std;
class A
{
    int num;
    static int count;
    public:
        void input(int x)
        {
            num=x;
            cout<<"\n num = "<<num;
            count ++;
        }
        void getcount()
        {
            cout<<"\n count = "<<count;
        }
};
int A::count=0;
int main()
{
    A a;
    a.getcount();
    a.getcount();
    a.input(100);
    a.input(200);  
    cout<<"\n After asing value ";
    a.getcount(); 
    return 0;
}