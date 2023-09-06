#include<iostream>
#include<conio.h>
using namespace std;
void input(int &n)
{     
    int sum=0,b,r;
    cout<<"enter a 3 digit no : ";
    cin>>n;
    // b=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;

    }
    cout<<"\n sum = "<<sum;
    // if(b==sum)
        // cout<<"this a armstorng";

    // else{
        // cout<<"not a armstrong";

    // }    


}
int main()
{
    int x;
    input(x);
    return 0;

}