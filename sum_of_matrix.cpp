#include<iostream>
using namespace std;
void sum(int arr[2][2],int arr1[2][2])
{
    int arr2 [2][2];
    cout<<"\n enter a 4 element for array 1: ";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }
     cout<<"enter a 4 element for array 2: ";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr1[i][j];
        }
    }
    cout<<"\n element of array 1 : \n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<"\n element of array 2 : \n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n Addition of 2 matrix is \n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            arr2[i][j]=arr[i][j]+arr1[i][j];
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
}
void sub(int arr[2][2],int arr1[2][2])
{
    int arr2 [2][2];
    cout<<"\n enter a 4 element for array 1: ";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }
     cout<<"enter a 4 element for array 2: ";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr1[i][j];
        }
    }
    cout<<"\n element of array 1 : \n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<"\n element of array 2 : \n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n Addition of 2 matrix is \n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            arr2[i][j]=arr[i][j]-arr1[i][j];
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
}
void mul(int arr[2][2],int arr1[2][2])
{
    int arr2 [2][2];
    cout<<"\n enter a 4 element for array 1: ";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }
     cout<<"enter a 4 element for array 2: ";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr1[i][j];
        }
    }
    cout<<"\n element of array 1 : \n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<"\n element of array 2 : \n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n multiplication of 2 matrix is \n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            arr2[i][j]=0;
            for(int k=0;k<2;k++)
            {
                arr2[i][j]+=arr[i][k]*arr1[k][j];
            }
        }
    } 
    for(int i=0;i<2;i++)
    {
            for(int j=0;j<2;j++)
        {
            cout<<arr2[i][j]<<" ";
        }
         cout<<endl;
   }
}
int main()
{
    int a[2][2],b[2][2];
    sum(a,b);
    sub(a,b);
    mul(a,b);
    return 0;
}