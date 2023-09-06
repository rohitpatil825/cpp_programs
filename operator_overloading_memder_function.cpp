#include<iostream>
using namespace std;
class UDemo
{
    int x,y,z;
    public:
        void input()
        {
            cout<<"\n enter a 3 no : ";
            cin>>x>>y>>z;
        }
        void show()
        {
            cout<<"\n x = "<<x
                <<"\n y = "<<y
                <<"\n z = "<<z;
        }
        void operator ++()
        {
            x++;
            y++;
            z++;
        }
};
int main()
{
    UDemo ob1;
    ob1.input();
    ob1.show();
    ++ob1;
    ob1.show();  
    return 0;
}