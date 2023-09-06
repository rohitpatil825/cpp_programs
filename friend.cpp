#include<iostream>
using namespace std;
class FriendDemo
{
    int a,b;
    public: 
        FriendDemo()
        {
            a=100;
            b=200;
        }
        friend void compute(FriendDemo f);
};
void compute(FriendDemo f)
{
    int c=f.a+f.b;
    cout<<"\n sum = "<<c;
}

int main()
{
    FriendDemo ob;
    compute(ob);
    return 0;
}