#include<iostream>
using namespace std;
void input(int &a)
{
    int sum=0,c,i;
    cout<<"enter a no: ";
    cin>>a;
    c=a;
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        sum=sum+i;

    }
    if(c==sum)
        cout<<c<<" is perfect no";
    else
        cout<<c<<" is not perfect no";
}
int main()
{
    int x;
    input(x);
    return 0;
}
