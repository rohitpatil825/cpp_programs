#include<iostream>
#include<conio.h>
using namespace std;
void swap(int &a,int &b)
{
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"\ninside swap a="<<a<<"\tb="<<b;
}
int main()
{
    int a,b;
    cout<<"enter a two no: ";
    cin>>a>>b;
    cout<<"\nbefore swap a="<<a<<"\tb="<<b;
    swap(a,b);
     cout<<"\n after swap a="<<a<<"\tb="<<b;
     getch();

}
    


