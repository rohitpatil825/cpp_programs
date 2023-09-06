#include<iostream>
using namespace std;
void input (int &a,int &b,int &c)
{
    cout<<"Enter a no. : ";
    cin>>a;
    cout<<"Enter a no. : ";
    cin>>b;
    if(a<b)
    {
        c=a;
    }
    else
    {
        c=b;
    }
}
int main()
{
    int x,y,z;
    input(x,y,z);
    cout<<"minimum no :"<<z;
    return 0;
}