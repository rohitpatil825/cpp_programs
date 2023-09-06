#include<iostream>
using namespace std;
int main()
{
    int a,&b=a;
    a=200;
    cout<<"\n value of A = "<<a;
    int c=b+20;
    cout<<"\n value of B = "<<c;
    return 0;
}