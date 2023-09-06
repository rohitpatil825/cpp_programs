#include<iostream>
using namespace std;
class Timetable
{
    public:
        void show()
        {
            cout<<"time/day\t mon\t tue\t wen\t thu\t fri\t sat\n"
                <<"11 to 12\t cs\t maths\t stat\t cpp\t c\t java\n "
                <<"12 to 1\t maths\t stat\t cs\t cpp\t java\t c\n"
                <<"1.30 to 2.30\t stat\t cs\t cpp\t c\t maths\t java\n";
        }
};
int main()
{
    Timetable h;
    h.show();
    return 0;
}