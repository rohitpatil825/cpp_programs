#include<iostream>
using namespace std;
int main()
{
    long x,fact=1,i;
    cout<<"\n enter a no : ";
    cin>>x;
    for(i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    cout<<"factorial of "<<x<<" is= "<<fact;
    return 0; 
}