#include<iostream>
using namespace std;
class Max
{
    int x;
    friend void input(Max &a,Max &b);
    friend void show(Max &a,Max &b);
    friend void domax(Max &a,Max &b);
};
void input(Max &a,Max &b)
{
    cout<<"\n enter a two no : ";
    cin>>a.x>>b.x;
} 
void show(Max &a,Max &b)
{
    cout<<"\n x = "<<a.x
        <<"\n x = "<<b.x;
}
void domax(Max &a,Max &b)
{
    int m=(a.x>b.x)?a.x:b.x;
    cout<<"\n maximum no = "<<m;
}
int main()
{
    Max ob1,ob2;
    input(ob1,ob2);
    show(ob1,ob2);
    domax(ob1,ob2);
    return 0;
}