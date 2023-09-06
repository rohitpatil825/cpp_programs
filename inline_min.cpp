#include<iostream>
using namespace std;
inline int min(int a,int b)
{
    return((a<b)?a:b);
}
int main()
{
    int a,x,y;
    cout<<"\n enter a two no : ";
    cin>>x>>y;
    a=min(x,y);
    cout<<"\n min no =: "<<a; 
    return 0;
}