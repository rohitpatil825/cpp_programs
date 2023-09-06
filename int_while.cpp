#include<iostream>
using namespace std;
int main()
{
    int i=1,sum=0,esum=0,osum=0;
    cout<<"\n first 10 no: ";
    while(i<=10)
    {
        cout<<"\t"<<i;
        sum=sum+i;
        i++;
    }
    /*i=1;
    while(i<=10)
    {
        sum=sum+i;
        i++;
    }*/
    cout<<"\n sum of first 10 no = "<<sum;
    i=1;
    while(i<=10)
    {
        if(i%2==0)
        {
            esum=esum+i;
            i++;
        }
        else
        {
            osum=osum+i;
            i++;
        }
    }
    cout<<"\n sum of even no = "<<esum;
    cout<<"\n sum of odd no = "<<osum;
    /*i=1;
    while(i<=10)
    {
        if(i%2!=0)
        {
            osum=osum+i;
        }
    }
    cout<<"\n sum of odd no = "<<osum;*/
    return 0;
}