#include<iostream>
using namespace std;
int main()
{
    int i,a,fact=1;
    cout<<"enter a no : ";
    cin>>a;
    i=1;
    do
    {
        fact=fact*i;
        i++;
    }while(i<=a);
    cout<<"factorial of "<<a<<" is "<<fact;
    return 0;
}