#include<iostream>
using namespace std;
class square
{
    int x;
    friend void input(square &z);
    friend void show(square &z);
    friend void dosquare (square &z);
};
void input(square &z)
{
    cout<<"\n enter a no : ";
    cin>>z.x;
}
void show(square &z)
{
    cout<<"\n x="<<z.x;
}
void dosquare(square &z)
{
    cout<<"\n square of "<<z.x<<" is "<<z.x*z.x;
}
int main()
{
    square s;
    input(s);
    show(s);
    dosquare(s);
    return 0;
}