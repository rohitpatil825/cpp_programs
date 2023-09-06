// pure virtual
#include<iostream>
using namespace std;
class A
{
    protected:
        int x,y;
    public:
        virtual void input()=0;
        virtual void show()=0;
};
class sum:public A
{
    public:
        void input()
        {
            cout<<"\n enter a two no  : ";
            cin>>x>>y;
        }
        void show()
        {
            cout<<"\n first no :"<<x
                <<"\n second no : "<<y;
        }
        void add()
        {
            cout<<"\n sum of "<<x<<" and "<<y<<" is "<<x+y;
        }
};
class sub:public A
{
    public:
        void input()
        {
            cout<<"\n enter a two no  : ";
            cin>>x>>y;
        }
        void show()
        {
            cout<<"\n first no :"<<x
                <<"\n second no : "<<y;
        }
        void subs()
        {
            cout<<"\n substraction of "<<x<<" and "<<y<<" is "<<x-y;
        }
};
class mul:public A
{
    public:
        void input()
        {
            cout<<"\n enter a two no  : ";
            cin>>x>>y;
        }
        void show()
        {
            cout<<"\n first no :"<<x
                <<"\n second no : "<<y;
        }
        void mult()
        {
            cout<<"\n multiplicaton of  "<<x<<" and "<<y<<" is "<<x*y;
        }

};
class division:public A
{
    public:
        void input()
        {
            cout<<"\n enter a two no  : ";
            cin>>x>>y;
        }
        void show()
        {
            cout<<"\n first no :"<<x
                <<"\n second no : "<<y;
        }
        void divi()
        {
            cout<<"\n division of "<<x<<" and "<<y<<" is "<<x/y;
        }
};
class minimum:public A
{
    public:
        void input()
        {
            cout<<"\n enter a two no  : ";
            cin>>x>>y;
        }
        void show()
        {
            cout<<"\n first no :"<<x
                <<"\n second no : "<<y;
        }
        void mini()
        {
            int min=(x<y)?x:y;
            cout<<"\n minimum no ="<<min;
        }
};
class maximum:public A
{
    public:
        void input()
        {
            cout<<"\n enter a two no  : ";
            cin>>x>>y;
        }
        void show()
        {
            cout<<"\n first no :"<<x
                <<"\n second no : "<<y;
        }
        void maxi()
        {
            int max=(x>y)?x:y;
            cout<<"\n maximum no = "<<max;
        }
};
int main()
{
    sum a;
    sub b;
    mul c;
    division d;
    minimum e;
    maximum f;
    A *z;
    cout<<"\n using sum object";
    z=&a;
    z->input();
    z->show();
    ((sum*)z)->add();
    cout<<"\n using sub object :";
    z=&b;
    z->input();
    z->show();
    ((sub*)z)->subs();
    cout<<"\n using mul object";
    z=&c;
    z->input();
    z->show();
    ((mul*)z)->mult();
    cout<<"\n using div object";
    z=&d;
    z->input();
    z->show();
    ((division*)z)->divi();
   cout<<"\n using min object ";
    z=&e;
    z->input();
    z->show();
    ((minimum*)z)->mini();
    cout<<"\n using max object";
    z=&f;
    z->input();
    z->show();
    ((maximum*)z)->maxi();
    return 0;
}