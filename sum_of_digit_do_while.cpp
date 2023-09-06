#include<iostream>
using namespace std;
int main()
{
    int a,e,sum=0;
    cout<<"enter ano : ";
    cin>>a;
    do
    {
        e=a%10;
        sum=sum+e;
        a=a/10;
    }while(a>0);
    cout<<"sum of digit = "<<sum;
    return 0;
}