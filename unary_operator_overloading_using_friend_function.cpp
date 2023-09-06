#include<iostream>
using namespace std;
class UDemo
{
    int x;
    public:
        void input()
        {
            cout<<"\n enter  a no : ";
            cin>>x;
        }
        void show()
        {
            cout<<"\n x = "<<x;
        }
        friend void operator ++(UDemo &a);
};
void operator ++(UDemo &a)
{
    a.x++;
}
int main()
{
    UDemo ob1;
    ob1.input();
    ob1.show();
    ++ob1;
    ob1.show();
    return 0;
}