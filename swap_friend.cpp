#include<iostream>
using namespace std;
class Swap
{
    int x,y;
    friend int main();
};
int main()
{
    Swap s;
    cout<<"\n enter a two no : ";
    cin>>s.x>>s.y;
    cout<<"\n before swaping :  ";
    cout<<"\n first no : "<<s.x
        <<"\n second no : "<<s.y;
    int t;
    t=s.x;
    s.x=s.y;
    s.y=t;
    cout<<"\n after swaping : "
        <<"\n first no : "<<s.x
        <<"\n second no : "<<s.y;    
    return 0;
}