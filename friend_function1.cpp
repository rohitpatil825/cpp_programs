#include<iostream>
using namespace std;
class Sum
{
    int x;
    friend void input(Sum &a,Sum &b);
    friend void show(Sum &a,Sum &b);
    friend void add(Sum &a,Sum &b);
};
void input(Sum &a,Sum &b)
{
    cout<<"\n enter a two no : ";
    cin>>a.x>>b.x;
}
void show(Sum &a,Sum &b)
{
    cout<<"\n first no : "<<a.x
        <<"\n second no : "<<b.x;
    
}
void add(Sum &a,Sum &b)
{
    cout<<"\n sum of "<<a.x
        <<" and "<<b.x<<" is "
        <<a.x+b.x;
}
int main()
{
    Sum ob1,ob2;
    input(ob1,ob2);
    show(ob1,ob2);
    add(ob1,ob2);   
    return 0;
}