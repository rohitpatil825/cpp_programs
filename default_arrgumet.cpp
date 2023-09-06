#include<iostream>
using namespace std;
void sum(int a,int b=10,int c=20)
{
    cout<<"\n sun of "<<a<<" and "<<b
    <<" and "<<c<<" is "<<a+b+c;
}
int main()
{
    sum(20);
    sum(30,0);
    sum(100,100,100);
    return 0;
}