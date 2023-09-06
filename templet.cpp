#include<iostream>
using namespace std;
template <class t1,class t2>
void sum(t1 a,t2 b)
{
    cout<<"\nSum = "<<a+b;
}
int main()
{
    sum(10,20);
    sum(10.89,35);
    sum(50.9,10);
    return 0;
}