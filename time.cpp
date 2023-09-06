#include<iostream>
using namespace std;
class time
{
    int a,h,m,s;
    public:
        void input()
        {
            cout<<"\n enter a second : ";
            cin>>a;
        }
        void show()
        {
            cout<<"\n H:M:S = "<<h<<":"<<m<<":"<<s;
        }
        void convert()
        {
            h=(a/3600);
            m=(a-(3600*h))/60;
            s=(a-(3600*h)-(m*60));
        }
};
int main()
{
    time c;
    c.input();
    c.convert();
    c.show();
    return 0;
}