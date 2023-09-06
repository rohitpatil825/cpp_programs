#include<iostream>
using namespace std;
float area(float r)
{
    float pI=3.14;
    return(3.14*r*r);
}
float area(float a,float b)
{
    return((a*b)/2);
}
int area(int a,int b)
{
    return(a*b);
}
int main()
{
    int w,l,ans=0;
    float x,b,h,res=0;
    cout<<"\n enter a redius of a circle: ";
    cin>>x;
    res=area(x);
    cout<<"\n area of a circle is : "<<res;
    cout<<"\n enter a base and hight if triangle : ";
    cin>>b>>h;
    res=area(b,h);
    cout<<"\n area of a triangle is : "<<res;
    cout<<"\n enter a width and length of rectangle : ";
    cin>>w>>l;
    ans=area(w,l);
    cout<<"\n area of a rectangle is : "<<ans;
    return 0;
}