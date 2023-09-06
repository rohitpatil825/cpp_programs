#include<iostream>
using namespace std;
class Sample
{
    static int count;
    int num;
    public:
        void getdata(int x);
        void getcount();
};
void Sample::getdata(int x)
{
    num=x;
    cout<<"\n num = "<<num;
    count++;
}
void Sample::getcount()
{
    cout<<"\n count = "<<count;
}
int Sample::count=0;
int main()
{
    Sample s1,s2,s3;
    s1.getcount();
    s2.getcount();
    s3.getcount();
    s1.getdata(100);
    s2.getdata(200);
    s3.getdata(300);
    cout<<"\n after a reading data : ";
    s1.getcount();
    s2.getcount();
    s3.getcount();
    return 0;
}