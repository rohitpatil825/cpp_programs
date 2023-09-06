#include<iostream>
using namespace std; 
class CD
{
    public:
        CD()
        {
            cout<<"\n consturctor exicuted ";
        }
        ~CD()
        {
            cout<<"\n distructor exicuted ";
        }
};
int main()
{
    {
        CD ob1;
        cout<<"\n before inner scope ";
        {
            CD ob2;
        }
        cout<<"\n after inner scope ";
    }  
    return 0;
}