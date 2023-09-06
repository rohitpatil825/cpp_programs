#include<iostream>
using namespace std;
int main()
{
    long a,i,fact=1;
    cout<<"\n enter a no: ";
    cin>>a;
    i=1;
    while(i<=a)
    {
        fact=fact*i;
        i++;
    }
    cout<<"\n factorial of "<<a<<" is="<<fact;
    return 0;
}