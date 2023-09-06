#include<iostream>
using namespace std;
class Test
{
    int code;
    static int count;
    public:
        void setcode()
        {
            code=++count;
        }
        void show()
        {
            cout<<"\n object no : "<<code;
        }
        static void showcount()
        {
            cout<<"\n count = "<<count;
        }
};
int Test::count=0;
int main()
{
    Test t1,t2;
    t1.setcode();
    t2.setcode();
    Test::showcount();
    Test t3;
    t3.setcode();
    Test::showcount();
    t1.show();
    t2.show();
    t3.show();
    return 0;
}