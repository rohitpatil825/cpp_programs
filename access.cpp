#include<iostream>
using namespace std;
class ADemo
{
    private:
        int x,y;
    public:
    void setvalue()
    {
        x=5;
        y=10;
    }
    void show()
    {
        cout<<"\n x="<<x<<
        "\n y= "<<y<<endl;
    }
};
int main()
{
    ADemo ob1,ob2;
    cout<<"\n ob1 data : ";
    ob1.setvalue();
    ob1.show();
    cout<<"\n ob2 data : ";
    ob2.setvalue();
    ob2.show();
    return 0;
}