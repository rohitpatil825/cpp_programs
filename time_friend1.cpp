#include<iostream>
using namespace std;
class Time
{
    int hr,min,sec;
    public:
        void input()
        {
            cout<<"\n Enter a hr,min,sec respectively : ";
            cin>>hr>>min>>sec;
        }
        void show()
        {
            cout<<hr<<":"<<min<<":"<<sec<<endl;
        }
        void calc()
        {
            min=min+sec/60;
            sec=sec%60;
            hr=hr+min/60;
            min=min%60;
        }
        friend Time add(Time a,Time b);
};
Time add(Time a,Time b)
{
    Time c;
    c.sec=a.sec+b.sec;
    c.min=a.min+b.min;
    c.hr=a.hr+b.hr;
    c.calc();
    return c;
}
int main()
{
    Time a,b,c;
    a.input();
    b.input();
    cout<<"\n before time addition ";
    a.show();
    b.show();
    cout<<"\n after time addition ";
    c=add(a,b);
    c.show();
    return 0;
}