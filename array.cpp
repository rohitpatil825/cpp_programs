ṇ#include<iostream>
// #include<conio.h>
using namespace std;
void main()
{
    int a[2][2],b[2][2],c[2][2]i,j;
     cout<<"\n enter a elemet of a array:";
     for(i=0;i<2;i++)
     {
        for(j=0;j<2;j++)
        {
            cin>>a[i][j];

        }
     }
     for(i=0;i<2;i++)
     {
        for(j=0;j<2;j++)
        {
            cout<<a[i][j];
            
        }
        cout<<"\n";
     }
    cout<<"\n enter a elemet of b array:";
     for(i=0;i<2;i++)
     {
        for(j=0;j<2;j++)
        {
            cin>>b[i][j];

        }
     }
     for(i=0;i<2;i++)
     {
        for(j=0;j<2;j++)
        {
            cout<<b[i][j];
            
        }
        cout<<"\n";
     }
     cout<<"\n sum of two matrix is";
     for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j]
        }
        cout<<"\n";
     }
     return 0;

}