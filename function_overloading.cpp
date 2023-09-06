#include<iostream>
using namespace std;
 void show()
    {
        cout<<"\n default : hello !";
    }
 void show(int a)
    {
        cout<<"\n value of int : "<<a;
    }
 void show(char a)
    {
        cout<<"\n value of char : "<<a;
    } 
void show(float a)
    {
        cout<<"\n float value : "<<a;
    }
void show(double a)
    {
        cout<<"\n double valu : "<<a;
    }



int main()
{
   show((float)11.22);
   show('S');
   show();
   show(90);
   show(9.53);
   return 0;
}