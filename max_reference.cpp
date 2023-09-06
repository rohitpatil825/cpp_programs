#include<iostream>
using namespace std;
void input(int &a,int &b,int &c)
{   

    cout<<"\n enter a two no:";
    cin>>a>>b;
    if(a>b)
        c=a;
    else
        c=b;
}
int main()
{   
    int x,y,z;
    input(x,y,z);
    cout<<z<<" is max no";
    return 0;

}