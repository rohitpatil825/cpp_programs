#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class college
{
    protected:
        int rno;
        char name[30];
        char dep[20];
    public:
        virtual void show()=0;
        virtual void input()=0;
};
class student:public college
{
    public:
        void input()
        {
            cout<<"\n enter a roll no : ";
            cin>>rno;
            cout<<"\n enter a student name : ";
            cin>>name;
            cout<<"\n enter a deparment : ";
            cin>>dep;
        }
        void show()
        {
            cout<<"\n Roll no : "<<rno
                <<"\n Name : "<<name
                <<"\n Deprment : "<<dep;
        }
};
class teacher:public college
{
    public:
        void input()
        {
            cout<<"\n enter a teacher ID no : ";
            cin>>rno;
            cout<<"\n enter a teacher name : ";
            cin>>name;
            cout<<"\n enter a deparment : ";
            cin>>dep;
        }
        void show()
        {
            cout<<"\n Teacher ID : "<<rno
                <<"\n Name : "<<name
                <<"\n Deparment : "<<dep;
        }
};
int main()
{
    college *c;
    student s;
    teacher t;
    cout<<"\n using student object : ";
    c=&s;
    c->input();
    c->show();
    cout<<"\n using teachear object : ";
    c=&t;
    c->input();
    c->show();
    return 0;
}