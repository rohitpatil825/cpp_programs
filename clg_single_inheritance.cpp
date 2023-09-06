#include<iostream>
using namespace std;
class Employee
{
    protected:
        int emp_id;
        char name[30];
        float bs;
        public:
            void input()
            {
                cout<<"\n enter a Employee Id : ";
                cin>>emp_id;
                cout<<"\n enter a name : ";
                cin>>name;
                cout<<"\n enter a basic salary : ";
                cin>>bs;
            }
            void show()
            {
                cout<<"\n Employee Id = "<<emp_id
                    <<"\n Name = "<<name
                    <<"\n Basic Salary = "<<bs;
            }
};
class Salary:public Employee
{
    float TA,DA,HRA,PF;
    public:
            void calc()
            {
                TA=0.05*bs;
                DA=0.07*bs;
                HRA=0.1*bs;
                PF=0.12*bs;
                float a=(bs+TA+DA+HRA-PF);
                cout<<"\n Total salary = "<<a;
            }
};
int main()
{   
    Salary s;
    s.input();
    s.show();
    s.calc();
    return 0;
}