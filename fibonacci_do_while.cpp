#include<iostream>
using namespace std;
int main()
{
    int a,i,f=0,f1=1,f2=1;
    cout<<"enter a no : ";
    cin>>a;
    i=1;
    do
    {
        f1=f2;
        f2=f;
        f=f1+f2;
        cout<<f<<endl;
        i++;
    }while(i<=a);

    return 0;
}