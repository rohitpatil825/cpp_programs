#include<iostream>
using namespace std;
class circle
{
    float r;
        public: 
            void input()
            {
                cout<<" \n enter a redius: ";
                cin>>r;
            }
            void show()
            {
                cout<<"\n radius= "<<r;
            }
            void doarea()
            {
                float pI=3.14;
                cout<<"\n area of circle is : "<<3.14*r*r;
            }
            void docircum()
            {
                cout<<"\n circumference of circle is : "<<2*3.14*r;
            }
            void setvalue()
            {
                r=5.4;
            }
};
int main()
{
    circle ob1,ob2;
    cout<<"\n using ob1 data ";
    ob1.setvalue();
    ob1.show();
    ob1.doarea();
    ob1.docircum();
    cout<<"\n using ob2 data  ";
    ob2.input();
    ob2.show();
    ob2.doarea();
    ob2.docircum();
     return 0;
} 