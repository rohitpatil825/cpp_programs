#include<iostream>
#include<string.h>
using namespace std;
class Cat
{
    char a[30],b[30];
    public:
        Cat(char x[30],char y[30])
        {
            strcpy(a,x);
            strcpy(b,y);
        }
        void show();
        void operator +();
};
void Cat::show()
{
    cout<<"\n  string 1 = "<<a
        <<"\n  string 2 = "<<b;
}
void Cat::operator +()
{
    strcat(a,b);
    cout<<"\n string = "<<a;
}
int main()
{
    char x[30];
    char y[30];
    cout<<"\n enter a first string : ";
    cin>>x;
    cout<<"\n enter a second string : ";
    cin>>y;
    Cat s(x,y);
    cout<<"\n before string concatination ";
    s.show();
    cout<<"\n after string concatination ";
    +s;
    return 0;
}