#include<iostream>
using namespace std;
int b=5000;
inline int d(int a)
{
    return(b+a);
}
inline int w(int a)
{
    return(b-a);
}
int main()
{
    int x,y;
    cout<<"\n current balance = "<<b;
    cout<<"\n enter a diposite ammount = ";
    cin>>x;
    b=d(x);
    cout<<"\n after diposite ammount = "<<b;
    cout<<"\n enter a widrow ammount = ";    
    cin>>y;
    if(y<b)
        {
            b=w(y);
            cout<<"\n after widrow ammount = "<<b;
        }
    else
    {
        cout<<"\n insuffisent balance";
    }
    return 0;
}