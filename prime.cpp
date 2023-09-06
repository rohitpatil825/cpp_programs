#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
    int a,i;
    cout<<"enter a no :";
    cin>>a;
    for(i=2;i<=a;i++)
    {
        if(a%i==0)
        break;
    }
    if(i==a)
        cout<<a<<" is prime no";
    else
        cout<<a<<" is not prime no";
    getch();

}