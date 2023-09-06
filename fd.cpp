#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter 1 to 4 digit no:";
    cin>>a;
    if(a>0)
    {
        if(a<=9)
          cout<<"one digit";
         else if(a<=99)
          cout<<"two digit";
         else if(a<=999)
         cout<<"three digit";
         else if(a<=9999)
         cout<<"fore digit";
         else
         cout<<"enter a 1 to 4 digit no";
    }
    else
         cout<<"enter a positive no 1 to 9999";
    return 0;
}