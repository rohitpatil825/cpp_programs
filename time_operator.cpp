#include<iostream>
using namespace std;
class Time
{
    int h,m,s;
    public:
    void settime(int x,int y,int z)
    {
        h=x;
        m=y;
        s=z;
    }
    void show()
    {
        cout<<h<<":"<<m<<":"<<s<<endl;
    }
    void calc()
    {
            m=m+s/60;
            s=s%60;
            h=h+m/60;
            m=m%60;
    }
    Time operator +(Time z)
    {
        Time a;
        a.s=s+z.s;
        a.m=m+z.m;
        a.h=h+z.m;
        a.calc();
        return a;
    }
};
int main()
{
    Time ob1,ob2,ob3;
    ob1.settime(10,30,67);
    ob2.settime(20,45,98);
    ob1.show();
    ob2.show();
    ob3=ob1+ob2;
    cout<<"\n sum of time is : ";
    ob3.show();    
    return 0;
}