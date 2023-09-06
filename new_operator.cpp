#include<iostream>
using namespace std;
int main()
{
    int *a=new int;
    *a=100;
    cout<<"\n value of a = "<<*a;
    *a=200;
    delete a;
    cout<<"\n value of a= "<<*a;
    return 0;
}   