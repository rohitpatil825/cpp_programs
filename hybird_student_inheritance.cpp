#include<iostream>
using namespace std;
class Sport
{   
    protected:
    int smarks;
        public:
            void input()
            {
                cout<<"\n enter a sport marks : ";
                cin>>smarks;
            }
            void show()
            {
                cout<<"\n Sport marks = "<<smarks;
            }
};
class Marks:public Sport
{
    protected:
    int s1,s2,s3;
    public:
        void input()
        {
            cout<<"\n enter a three subject marks : ";
            cin>>s1>>s2>>s3;
            Sport::input();
        }
        void show()
        {
            cout<<"\n Subject 1 marks = "<<s1
                <<"\n Subject 2 marks = "<<s2
                <<"\n Subject 3 marks = "<<s3;
            Sport::show();
        }
};
class Extra
{
    protected:
    char post[30];
    public:
        void input()
        {
            cout<<"\n Enter a Your Post in NCC : ";
            cin>>post;
        }
        void show()
        {
            cout<<"\n Post = "<<post;
        }
};
class Student:public Extra,public Marks
{
    char name[30],div,rem[20];
    int rno,std;
    int gettotal()
    {
        return(s1+s2+s3+smarks);
    }
    float getavg()
    {
        return((float)gettotal()/4.0f);
    }
    char * getrem()
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
    public:
        void input()
        {
            cout<<"\n enter a roll no : ";
            cin>>rno;
            cout<<"\n enter a name : ";
            cin>>name;
            cout<<"\n enter a division : ";
            cin>>div;
            cout<<"\n enter a standerd : ";
            cin>>std;
            Extra::input();
            Marks::input();
        }
        void show()
        {
            cout<<"\n Roll no = "<<rno
                <<"\n Name = "<<name
                <<"\n Division = "<<div
                <<"\n Standerd = "<<std;
                Marks::show();
                Extra::show();
            cout<<"\n Total = "<<gettotal()
                <<"\n Average = "<<getavg()
                <<"\n Remark = "<<getrem();
        }
};
int main()
{
    Student s;
    s.input();
    cout<<"\n **********--STUDENT DETAILS--**********";
    s.show();
    return 0;
}