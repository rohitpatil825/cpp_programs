#include<iostream>
using namespace std;
void input(int &a,int &b,int &c)
{
    cout<<"enter a no: ";
    cin>>a;
    if(a%2==0)
    {
        b=a;

    }
    else if(a%2==1)
    {
        c=a;
    }
}
int main()
{
    int x,y,z;
    input(x,y,z);
    cout<<y<<" is even no";
    cout<<z<<" is odd no";
    return 0;
}