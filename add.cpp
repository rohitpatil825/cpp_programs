#include<iostream>
using namespace std;
class sum
{
    private:
        int a,b;
    public:
       void dosum()
        {
            cout<<"sum of "<<a<<" and "<<b<<" is "<<a+b;
        }
        sum(int x,int y)
        {
           a=x;
           b=y; 
        }
        sum()
        {
            a=5;
            b=10;
        }
        sum( sum &z)
        {
            a=z.a;
            b=z.b;
        }
        void show()
        {
            cout<<"\n value of a = "<<a
                <<"\n value of b = "<<b;
        }
};
int main()
{
    sum ob1,ob2(12,38),ob3(ob2);
    cout<<"\n using ob 1 data ";
    ob1.show();
    ob1.dosum();    
    cout<<"\n using ob 1 data ";
    ob1.show();
    ob1.dosum();

     return 0;
}