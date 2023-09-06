#include<iostream>
using namespace std;
class Max
{
    int x,y;
    friend int main();
};
int main()
{
    Max a;
    cout<<"\n enter a two no : ";
    cin>>a.x>>a.y;
    int max=(a.x>a.y)?a.x:a.y;
    cout<<"\n maimum no = "<<max;
    return 0;
}