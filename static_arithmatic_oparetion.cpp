#include<iostream>
using namespace std;
class AM
{
    int x;
    static int count,sum,min,max;
    static float avg;
    public:
        AM()
        {
            x=10;
            clac();
        }
        AM(int a)
        {
            x=a;
            clac();
        }
        AM(AM &a)
        {
            x=10;
            clac();
        }
        void show()
        {
            cout<<"\n value of x = "<<x;
        }
        static void display()
        {  
            cout<<"\n sum = "<<sum
                <<"\n avg = "<<avg
                <<"\n max no = "<<max
                <<"\n min no = "<<min
                <<"\n count = "<<count;
        }
        void clac()
        {
            count ++;
            cout<<count<<" object created \n";
            sum=sum+x;
            min=(x<min)?x:min;
            max=(x>max)?x:max;
            avg=(float)sum/(float)count;
        }
};
int AM::count;
int AM::sum;
int AM::max;
int AM::min=32767;
float AM::avg;

int main()
{
    AM ob1,ob2(20);
    AM ob3=ob1;
    cout<<"\n object 1 ";
    ob1.show();
    cout<<"\n object 2 ";
    ob2.show();
    cout<<"\n object 3 ";
    ob3.show();
    cout<<"\n after arethmatic oparetion is  ";
    AM::display();
    return 0;
}