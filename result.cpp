#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int a;
   cout<<"enter a your persentage :";
   cin>>a;
   if(a>=75)
   {
        cout<<"first class with distiation";

   } 
   else if(a>=70)
   {
        cout<<"first class";

   }
   else if(a>=60)
   {
        cout<<"second class";

   }
   else if(a>=35)
   {
        cout<<"pass";

   }
   else
   {
        cout<<" fail";
   }
}