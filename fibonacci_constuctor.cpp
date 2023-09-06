#include<iostream>
using namespace std;
class Fibonacci
{
    int a,i,f,f1,f2;
    public:
        Fibonacci();
        Fibonacci(int  a);
        void calc();
};
Fibonacci::Fibonacci()
{
    f=0;
    f1=1;
}
Fibonacci::Fibonacci(int a)
{
    f2=a;
}
void Fibonacci:: calc()
{
    cout<<"\n enter a no : ";
    cin>>a;
    do
    {
        f=f1+f2;
        f1=f2;
        f2=f;
        cout<<f<<endl;
        a--;
    }while (a>0);
}
int main()
{
    Fibonacci ob1(),ob2(2),ob3;
    ob3.calc();
    return 0;
}