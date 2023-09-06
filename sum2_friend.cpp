#include<iostream>
using namespace std;
class A
{
    protected:
     int a;
     public:
     void input()
     {
        cout<<"\n enter  a no : ";
        cin>>a;
     }
     void show()
     {
        cout<<"\n First no = "<<a;
    }

};
class B:public A
{
    int b,c;
    public:
        void input()
        {
            cout<<"\n enter a no : ";
            cin>>b;
        }
}
int main()
{
    
    return 0;
}