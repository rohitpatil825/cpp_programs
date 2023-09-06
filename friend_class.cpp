#include<iostream>
using namespace std;
class Twono
{
    int x,y;
    friend class Sum;
    friend class Max;
    friend class Min;
};
class Sum
{
    public:
        void input(Twono &ob)
        {
            cout<<"\n enter a two no : ";
            cin>>ob.x>>ob.y;
        }
        void show(Twono &ob)
        {
            cout<<"\n first no : "<<ob.x
            
                <<"\n second no : "<<ob.y;
        }
        void sum(Twono &ob)
        {
            cout<<"\n sum of "<<ob.x<<" and "
                <<ob.y<<" is "<<ob.x+ob.y;
        }
};
class Max
{
    
    public:
        void input(Twono &ob)
        {
            cout<<"\n enter a two no : ";
            cin>>ob.x>>ob.y;
        }
        void show(Twono &ob)
        {
            cout<<"\n first no : "<<ob.x
                <<"\n second no : "<<ob.y;
        }
        void max(Twono &ob)
        {
            int m=(ob.x>ob.y)?ob.x:ob.y;
            cout<<"\n Maximum no = "<<m;
        }

};
class Min
{
    
    public:
        void input(Twono &ob)
        {
            cout<<"\n enter a two no : ";
            cin>>ob.x>>ob.y;
        }
        void show(Twono &ob)
        {
            cout<<"\n first no : "<<ob.x
                <<"\n second no : "<<ob.y;
        }
        void min(Twono &ob)
        {
            int m=(ob.x<ob.y)?ob.x:ob.y;
            cout<<"\n minimun no = "<<m;
        }
};
int main()
{
    Twono t;
    Sum s;
    Max m;
    Min a;
    cout<<"\n get sum of two no ";
    s.input(t);
    s.show(t);
    s.sum(t);
    cout<<"\n get maximum no ";
    m.input(t);
    m.show(t);
    m.max(t);
    cout<<"\n get minimum no ";
    a.input(t);
    a.show(t);
    a.min(t);
    return 0;
}