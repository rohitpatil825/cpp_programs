#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i;
    i=10;
    while(i>0)
    {
        cout<<i<<setw(3);
        i--;
    }
    return 0;
}