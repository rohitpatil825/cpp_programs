#include<iostream>
using namespace std;
int main()
{
    int a[2][2],b[2][2];
    cout<<"\n enter a 4 element :";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"\n array element are :\n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n after transpose :\n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            b[i][j]=a[j][i];
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}