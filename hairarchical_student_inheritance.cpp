#include<iostream>
using namespace std;
class Student
{
    protected:
    int rno,std,s1,s2,s3,tot;
    char name[30],div,rem[20];
    float avg;
    int gettotal()
    {
        return(s1+s2+s3);
    }
    float getavg()
    {
        return((float)gettotal()/3.0f);
    }
    public:
        void input();
        void show();
        char * getrem();
};
void Student::input()
{
    cout<<"\n enter a name : ";
    cin>>name;
    cout<<"\n enter a roll no : ";
    cin>>rno;
    cout<<"\n enter a standred : ";
    cin>>std;
    cout<<"\n enter a division : ";
    cin>>div;
    cout<<"\n enter a three subject marks : ";
    cin>>s1>>s2>>s3;
}
void Student::show()
{
    cout<<"\n Name = "<<name
        <<"\n Roll no = "<<rno
        <<"\n Standerd = "<<std
        <<"\n Division = "<<div
        <<"\n Total = "<<gettotal()
        <<"\n Average = "<<getavg()
        <<"\n Remark = "<<getrem();
}
char *Student::getrem()
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
class VCK:public Student
{
    char post[30];
    public:
        void  input();
        void show();
};
void VCK::input()
{
    Student::input();
    cout<<"\n enter a post in NCC : ";
    cin>>post;
}
void VCK::show()
{
    Student::show();
    cout<<"\n NCC Post is : "<<post;
}
class NCK:public Student
{
    char post[30];
    public:
        void input();
        void show();
};
void NCK::input()
{
    Student::input();
    cout<<"\n enter a post in NSS : ";
    cin>>post;
}
void NCK::show()
{
    Student::show();
    cout<<"\n NSS post is : "<<post;
}
int main()
{
    VCK ob1;
    NCK ob2;
    cout<<"\n using VCK object : ";
    ob1.input();
    ob1.show();
    cout<<"\n__________________________________";
    cout<<"\n using NCK object : ";
    ob2.input();
    ob2.show();
    return 0;
}