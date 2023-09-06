#include<iostream>
using namespace std;
class Sport
{
    protected:
        int smark;
    public:
        void input();
        void show();
};
    void Sport::input()
    {
        cout<<"\n enter a sport marks : ";
        cin>>smark;
    }
    void Sport::show()
        {
            cout<<"\n Sport marks = "<<smark;
        }
class Mark
{
    protected:
        int s1,s2,s3;
    public:
        void input();
        void show();
};
    void Mark::input()
    {
        cout<<"\n enter a 3 subject marks : ";
        cin>>s1>>s2>>s3;
    }
    void Mark::show()
    {
        cout<<"\n Subject 1 marks = "<<s1
            <<"\n Subject 2 marks = "<<s2
            <<"\n Subject 3 marks = "<<s3;
    }
class Student:public Sport,public Mark
{
    int rno,std,tot;
    char name[30],div,rem[20];
    float avg;
    int gettotal()
    {
        return(s1+s2+s3+smark);
    }
    float getavg()
    {
        return((float)gettotal()/4.0f);
    }
    public:
        void input();
        void show();
        char *getrem();
};
    void Student::input()
    {
        cout<<"\n enter a name : ";
        cin>>name;
        cout<<"\n enter a roll no : ";
        cin>>rno;
        cout<<"\n enter a standerd : ";
        cin>>std;
        cout<<"\n enter a division : ";
        cin>>div;
        Mark::input();
        Sport::input();
    }
    void Student::show()
    {
        cout<<"\n Name = "<<name
            <<"\n Roll no = "<<rno
            <<"\n Standerd = "<<std
            <<"\n Division = "<<div;
            Mark::show();
            Sport::show();
        cout<<"\n Total = "<<gettotal()
            <<"\n Average = "<<getavg()
            <<"\n Remark = "<<getrem();
    }
     char * Student::getrem()
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
int main()
{
    Student s;
    s.input();
    s.show();   
    return 0;
}