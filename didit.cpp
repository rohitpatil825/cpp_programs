#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,i;
    cout<<"enter no between 1 to 9999 :";
    cin>>a;
    if(a>0)
    {
        for(i=1;i<=9;i++)
        {
            if(a==i)
            {
                cout<<a<<" is one digit no";
                break;

            }
        }
        for(i=10;i<=99;i++)
        {
            if(a==i)
            {
                cout<<a<<" is two digit no";
                break;

            }
        }
        for(i=100;i<=999;i++)
        {
            if(a==i)
            {
                cout<<a<<" is three digit no";
                break;

            }   
        }
         for(i=1000;i<=9999;i++)
        {
            if(a==i)
            {
                cout<<a<<" is four digit no";
                break;

            }   
        }
    }
    else
    {
        cout<<" please enter no between 1 to 9999 :";
    }
    return 0;
}
