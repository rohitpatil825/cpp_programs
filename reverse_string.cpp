#include<iostream>
#include<string.h>
using namespace std;
class rev
{
    char x[30];
    public:
        rev(char a[30])
        {
            strcpy(x,a);
        }
        void show()
        {
            cout<<"\n string = "<<x;
        }
        void operator -()
        {
            strrev(x);
            cout<<"\n String = "<<x;
        }
};
int main()
{
    char a[30];
    cout<<"\n enter  a string : ";
    cin>>a;
    rev r(a);
    cout<<"\n Before String Rerverse ";
    r.show();
    cout<<"\n After a String Reverse ";
    -r;
    return 0;
}