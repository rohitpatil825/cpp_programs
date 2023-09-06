#include<iostream>
using namespace std;
class sum
{
    int a;
    friend void input(sum &x,sum &y);
    friend void show(sum &x,sum &y);
    friend void dosum(sum &x,sum &y);
};
void input(sum &x,sum &y)
{
    cout<<"\n enter a no : ";
    cin>>x.a>>y.a;
}
void show(sum &x,sum &y)
{
    cout<<"\n a = "<<x.a
        <<"\n a = "<<y.a;
}
void dosum(sum &x,sum &y)
{
    cout<<"\n sum of "<<x.a<<" and "<<y.a<<" is "<<x.a+y.a;
}
int main()
{
    sum x,y;
    input(x,y);
    show(x,y);
    dosum(x,y);
    return 0;
}