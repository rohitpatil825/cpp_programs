#include<iostream>
using namespace std;
void input(int &a)
{
    int b,sum=0,c;
    cout<<"enter a no : ";
    cin>>a;
    c=a;
    while(a>0)
    {
        b=a%10;
        sum=(sum*10)+b;
        a=a/10;
    }
    if(c==sum)
        cout<<" palindrome no: "<<c;
    else   
        cout<<"not palindrome no: "<<c;
}
int main()
{
    int x;
    input(x);
    return 0;
}
