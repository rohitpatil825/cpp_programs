#include<iostream>
using namespace std;
int main()
{
    int a,i,f=0,f1=1,f2=1;
    a=5;
    i=0;
    while (i<=a)
    {
        f1=f2;
        f2=f;
        f=f1+f2;
        cout<<f<<endl;
        i++;
    }
    return 0;
}