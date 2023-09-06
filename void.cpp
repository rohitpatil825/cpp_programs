#include<iostream>
using namespace std;
void printnumber(int a)
{
    cout<<"number is "<<a;
}
int main()//void is not used for main because main must be return somethings 
{
    float a;
    cout<<"Enter a no.: ";
    cin>>a;
    // cout<<"number is "<<a;
    printnumber(a);
    return 0;
}