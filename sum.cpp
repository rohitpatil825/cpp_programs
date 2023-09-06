#include<iostream>
using namespace std;
class sum 
{
    public:
        int show(int a,int b)
        {
            int sum=0;
            sum=a+b;
            return sum;
        }
};
int main()
{
    int a,b,x;
    sum h;
    cout<<"\n enter a no : ";
    cin>>a>>b;
    x=h.show(a,b); 
    cout<<"\n sum= "<<x; 
    return 0;
}