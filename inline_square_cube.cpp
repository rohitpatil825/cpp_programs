#include<iostream>
using namespace std;
inline int square(int a)
{
    return(a*a);
}
inline int cube(int a)
{
    return(a*a*a);
}
int main()
{
    int a,res;
    cout<<"\n enter a no: ";
    cin>>a;
    res=square(a);
    cout<<"\n square of "<<a<<" is "<<res;
    res=cube(a);
    cout<<"\n cube of "<<a<<" is "<<res;
    return 0;
}