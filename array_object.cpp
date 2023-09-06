#include<iostream>
using namespace std;
class Book
{
    char name[30];
    int price;
    public:
        void getdata();
        void putdata();
};
void Book::getdata()
{
    cout<<"\n enter a Title: ";
    cin>>name;
    cout<<"\n book price : ";
    cin>>price;
}
void Book::putdata()
{
    cout<<"\n Title : "<<name
        <<"\n Price : "<<price;
}
int main()
{
    Book b[5];
    for(int i=0;i<2;i++)
    {
        cout<<"\n enter a details of book "<<i+1;
        b[i].getdata();
    }
    cout<<"\n books are : ";
    for(int j=0;j<2;j++)
    {
        b[j].putdata();
    }
    return 0;
}