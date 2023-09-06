#include<iostream>
#include<stdio.h>
using namespace std;
class Tushar
{
    int rno;
    long contact;
    char name[30];
    char address[30];
    char cls[15];
    public:
        void input();
        void show();
};
void Tushar::input()
{
    cout<<"\n enter a name : ";
    gets(name);
    cout<<"\n enter a address : ";
    gets(address);
    cout<<"\n enter a class : ";
    gets(cls);
     cout<<"\n enter a Roll no : ";
    cin>>rno;
    cout<<"\n enter a contact : ";
    cin>>contact;
}
void Tushar::show()
{
    cout<<"\n Roll no = "<<rno
        <<"\n contact = "<<contact
        <<"\n name = "<<name
        <<"\n address = "<<address
        <<"\n class = "<<cls;
}
int main()
{
    Tushar a;
    a.input();
    a.show();   
    return 0;
}