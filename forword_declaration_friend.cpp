// sum of two no using forword declaration friend function
#include<iostream>
using namespace std;
class Best;
class Test 
{
    int x;
    friend void input(Test &a,Best &b);
    friend void show(Test &a,Best &b);
    friend void sum(Test &a,Best &b);
};
class Best 
{
    int y;
    friend void input(Test &a,Best &b);
    friend void show(Test &a,Best &b);
    friend void sum(Test &a,Best &b);
};
void input(Test &a,Best &b)
{
    cout<<"\n enter a two no : ";
    cin>>a.x>>b.y;
}
void show(Test &a,Best &b)
{
    cout<<"\n first no : "<<a.x
        <<"\n second no : "<<b.y;
}
void sum(Test &a,Best &b)
{
    cout<<"\n sum of "<<a.x<<" and "<<b.y<<" is "<<a.x+b.y;
}
int main()
{
    Test p;
    Best q;
    input(p,q);
    show(p,q);
    sum(p,q);
    return 0;
}