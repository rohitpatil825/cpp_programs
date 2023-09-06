#include<iostream>
using namespace std;
int main()
{
    int d;
    do
    {
    cout<<"\n enter a value for d: ";
    cin>>d;
    switch(d)
    {
        case 1:
        cout<<"\n monday";
        break;
        case 2:
        cout<<"\n tuesday";
        break;
        case 3:
        cout<<"\n wensday";
        break;
        case 4:
        cout<<"\n thursday";
        break;
        case 5:
        cout<<"\n firday";
        break;
        case 6:
        cout<<"\n saturday";
        break;
        case 7:
        cout<<"\n sunday";
        break;
        default:
        cout<<"invalid choice";
    }
    }while(d!=8);
    return 0;
}