#include<iostream>
using namespace std;
class sum
{
    int a,b;
    friend void input(sum &x);
    friend void show(sum &x);
    friend void dosum(sum &x);
};
void input(sum &x)
{
    cout<<"\n enter a two no : ";
    cin>>x.a>>x.b;
}
void show(sum &x)
{
    cout<<"\n frist no = "<<x.a
        <<"\n second no = "<<x.b;
}
void dosum(sum &x)
{
    cout<<"\n sum of "<<x.a<<" and "<<x.b<<" is "<<x.a+x.b;
}
int main()
{
    sum s;
    input(s);
    show(s);
    dosum(s);   
    return 0;
}