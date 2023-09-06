#include<iostream>
using namespace std;
class Sport
{
    protected:
    int x;
    public:
        void input()
        {
            cout<<"\n enter  a sport marks : ";
            cin>>x;
        }
        void show()
        {
            cout<<"\n Sport marks = "<<x;
        }
};
class Marks:public Sport
{
    protected:
    int s1,s2,s3;
    public:
        void input()
        {
            Sport::input();
            cout<<"\n enter a three subject marks : ";
            cin>>s1>>s2>>s3;
        }
        void show()
        {
            Sport::show();
            cout<<"\n subject 1 marks = "<<s1
                <<"\n subject 2 marks = "<<s2
                <<"\n subject 3 marks = "<<s3;
        }
};
class Student:public Marks
{
    int rno,std,tot;
    char name[30],div,rem[20];
    float avg;
    int gettotal()
    {
        return(s1+s2+s3+x);
    }
    float getavg()
    {
        return((float)gettotal()/4.0f);
    }
    public:
         char *getrem()
        {
             float av=getavg();
             if(av>75)
             return "Distinction";
             else if(av>65)
             return "first class";
             else if(av>55)
             return "second class";
             else if(av>35)
             return "pass";
             else
             return "Fail";
         }
        void input()
        {
            cout<<"\n enter a name : ";
            cin>>name;
            cout<<"\n enter a Roll no : ";
            cin>>rno;
            cout<<"\n enter a standerd : ";
            cin>>std;
            cout<<"\n enter a Division : ";
            cin>>div;
            Marks::input();
        }
        void show()
        {
            cout<<"\n Name = "<<name
                <<"\n Roll no = "<<rno
                <<"\n Standerd = "<<std
                <<"\n Division = "<<div;
                Marks::show();
            cout<<"\n Total = "<<gettotal()
                <<"\n Average = "<<getavg()
                <<"\n Remark = "<<getrem();
        }
};
int main()
{
    Student s;
    s.input();
    s.show();
    return 0;
}