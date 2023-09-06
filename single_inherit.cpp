#include<iostream>
using namespace std;
class Marks
{
    protected:
    int s1,s2,s3,sportmark;
        public:
            void input()
            {
                cout<<"\n enter a subject 1 marks : ";
                cin>>s1;
                cout<<"\n enter a subject 2 marks : ";
                cin>>s2;
                cout<<"\n enter a subject 3 marks : ";
                cin>>s3;
                cout<<"\n enter a sportmarks : ";
                cin>>sportmark;
            }
            void show()
            {
                cout<<"\n subject 1 marks = "<<s1
                    <<"\n subject 2 marks = "<<s2
                    <<"\n subject 3 marks = "<<s3
                    <<"\n subject sport marks = "<<sportmark;
            }
};
class Student:public Marks
{
    int rno,std,tot;
    char name[30],div,rem[20];
        public:
           int gettotal()
         {
            return(s1+s2+s3+sportmark);
         }
         float getavg()
         {
            return((float)gettotal()/4.0f);
         }
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
            Marks::input();
            cout<<"\n enter a name : ";
            cin>>name;
            cout<<"\n enter a standered : ";
            cin>>std;
            cout<<"\n enter a division : ";
            cin>>div;
         }
         void show()
         {
            Marks::show();
            cout<<"\n Name = "<<name
                <<"\n Standered = "<<std
                <<"\n Division = "<<div
                <<"\n Total = "<<gettotal()
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