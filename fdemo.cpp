#include<iostream>
using namespace std;
class Fdemo
{
    int x;
    friend int main();
};
int main()
{
    Fdemo ob1;
    ob1.x=10;
    cout<<"\n square of "<<ob1.x<<" is "<<ob1.x*ob1.x;
    return 0;
}