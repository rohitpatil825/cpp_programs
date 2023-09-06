#include<iostream>
using namespace std;
class Student
{
    protected:
    int rno;
    char name[30];
    public:
        void input()
        {
            cout<<"\n enter a rno and name : ";
            cin>>rno>>name;
        }
};
class Test:virtual public Student
{
    protected:
        int s1,s2;
    public:
        void input_mark()
        {
            input();
            cout<<"\n Enter a Mark For Sub1 & Sub2 : ";
            cin>>s1>>s2;
        }
};
class Sport:virtual public Student
{
    protected:
        int s;
    public:
        void input_smark()
        {
            cout<<"\n Enter a Sport marks : ";
            cin>>s;
        }
};
class Result:public Test,public Sport
{
    int tot;
    public:
        void display()
        {
            tot=s1+s2+s;
            cout<<"\n"<<rno<<"\t"<<name<<"\t"<<s1<<"\t"<<s2
                <<"\t"<<s<<"\t"<<tot;
        }
};
int main()
{
    Result r[5];
    for(int i=0;i<5;i++)
{
    r[i].input_mark();
    r[i].input_smark();
}
    cout<<"\nroll no\tname\ts1\ts2\tsport\ttotal";
    for(int j=0;j<5;j++)
    {
        r[j].display();
    }
    return 0;
}