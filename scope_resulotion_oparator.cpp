#include<iostream>
using namespace std;
int x;
int main()
{
    int x,y;
    cout<<"\n enter a two no :";
    cin>>::x>>x;
    cout<<"\n before swap global x is :"<<::x<<endl
        <<"\n before swap local x is :"<<x;
        y=::x;
        ::x=x; 
        x=y;
    cout<<"\n after swap global x :"<<::x<<endl
        <<"\n after swap local x is :"<<x;
    return 0;
        

}
