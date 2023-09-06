#include<iostream>
using namespace std;
#include<stdio.h>
#include<string.h>
class Student
{
    int rno,std,s1,s2,s3,tot;
    char name[30],div,rem[30];
    float avg;
    int gettotal();
    float getavg();
    char * getrem();
    public:
        Student();
        Student(Student &s);
        Student(int rno,int std,int s1,int s2,int s3,char *name,char div);
        void input();
        void show();
};
    Student::Student()
        {
            rno=1;
            strcpy(name,"Sarang Patil");
            div='A';
            std=1;
            s1=0;
            s2=0;
            s3=0;
            tot=gettotal();
            avg=((float)gettotal()/3.0F);
            strcpy(rem,getrem());
        }
       Student::Student(Student &s)
        {
            rno=s.rno;
            strcpy(name,s.name);
            div=s.div;
            s1=s.s1;
            s2=s.s2;
            s3=s.s3;
            tot=s.tot;
            avg=s.avg;
            strcpy(rem,s.rem);
        }
       Student::Student(int rno,int std,int s1,int s2,int s3,char *name,char div)
        {
            this ->rno=rno;
            this ->std=std;
            strcpy(this ->name,name);
            this ->div=div;
            this ->s1=s1;
            this ->s2=s2;
            this ->s3=s3;
            tot=gettotal();
            avg=getavg();
            strcpy(rem,getrem());
        }
        void Student::input()
        {
            cout<<"\n enter a roll no : ";
            cin>>rno;
            cout<<"\n enter a name : ";
            cin>>name;
            cout<<"\n enter a standerd : ";
            cin>>std;
            cout<<"\n enter a division : ";
            cin>>div;
            cout<<"\n enter a three subjet marks : ";
            cin>>s1>>s2>>s3;
        }
        void Student::show()
        {
            cout<<"\n Roll no = "<<rno
                <<"\n Name = "<<name
                <<"\n Division = "<<div
                <<"\n Standerd = "<<std
                <<"\n subject 1 marks = "<<s1
                <<"\n subject 2 marks = "<<s2
                <<"\n subject 3 marks = "<<s3
                <<"\n Total = "<<gettotal()
                <<"\n Average = "<<getavg()
                <<"\n Remark = "<<getrem();
        }
        int Student::gettotal()
        {
            return(s1+s2+s3);
        }
        float Student::getavg()
        {
            return((float)gettotal()/3.0F);
        }
        char * Student::getrem()
        {
            float av=getavg();
            if(av>75)
                return "Distinction\n";
            else if(av>70)
                return "First class\n";
            else if(av>60)
                return "second class\n";
            else if(av>35)
                return "pass";
            else    
                return "Better than next time\n";
        }
int main()
{
    Student s1(2,12,50,98,89,"Shubham Jadhav",'A');
    Student s2,s3(s1),s4;
    cout<<"*************************************************************";
    cout<<"\n using s1 ";
    s1.show();
    cout<<"*************************************************************";
    cout<<"\n using s2 ";
    s2.show();
    cout<<"*************************************************************";
    cout<<"\n using s3 ";
    s3.show();
    cout<<"*************************************************************";
    s4.input();
    s4.show();
    return 0;
}