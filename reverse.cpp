#include<iostream>
using namespace std;
int main()
{
    int a,sum=0,b;
    cout<<"enter a no : " ;
    cin>>a;
    while(a>0)
    {
        b=a%10;
        sum=(sum*10)+b;
        a=a/10;
    }
    cout<<"reverse no is : "<<sum;
    return 0;
}