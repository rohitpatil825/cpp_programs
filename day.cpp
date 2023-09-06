#include<iostream>
using namespace std;
class day
{
    int a,y,m,d;
    public:
        void input()
        {
            cout<<"\n enter a day : ";
            cin>>a;
        }
        void show()
        {
            cout<<"\n year = "<<y
                <<"\n month= "<<m
                <<"\n day = "<<d;
        }
        void convert()
        {
                y=a/365;
                m=(a-(y*365))/30;
                d=(a-y*365-m*30);
        }
};
int main()
{
    day c;
    c.input();
    c.convert();
    c.show(); 
    return 0;
}
