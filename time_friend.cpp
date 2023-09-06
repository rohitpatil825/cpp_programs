#include<iostream>
using namespace std;
class Time
{
    int hr,min,sec;
    public:
        void input()
        {
            cout<<"\n enter a hr min and sec : ";
            cin>>hr>>min>>sec;
        }
        void show()
        {
            cout<<endl<<hr<<":"<<min<<":"<<sec;
        }
        void calc()
        {
            min=min+sec/60;
            sec=sec%60;
            hr=hr+min/60;
            min=min%60;
        }
        friend Time  operator +(Time &a,Time &b);
};
Time operator +(Time &a,Time &b)
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
    Time A,B,C;
    A.input();
    B.input();
    A.show();
    B.show();
    cout<<"\n After addition of time";
    C=A+B;
    C.show();
    return 0;
}