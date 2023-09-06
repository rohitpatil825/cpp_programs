#include<iostream>
using namespace std;
inline int max(int a,int b)
{
    return((a>b)?a:b);
}
int main()
{
    int a,x,y;
    cout<<"\n enter a two no : ";
    cin>>x>>y;
    a=max(x,y);
    cout<<"\n max no =: "<<a;
    return 0;
}