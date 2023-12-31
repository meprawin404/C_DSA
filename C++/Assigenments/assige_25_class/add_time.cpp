#include<iostream>
using namespace std;

class Time
{
    private:
        int hour;
        int min;
        int sec;
    public:
        void setTime(int x,int y,int z)
        {
            hour = x;
            min = y;
            sec = z;
        }

        void displayTime()
        {
            cout<<endl<<hour<<"hr "<<min<<"min "<<sec<<"sec";
        }

        Time addTime(Time t1, Time t2);
};

Time Time::addTime(Time t1, Time t2)
{
    Time temp;
    temp.sec = t1.sec + t2.sec;
    temp.min = t1.min + t2.min + temp.sec/60;
    temp.sec = temp.sec%60;
    temp.hour = t1.hour + t2.hour;
    return temp;
}

int main()
{
    Time t1,t2;
    t1.setTime(3,20,60);
    t2.setTime(10,33,60);
    t1.displayTime();
    t2.displayTime();

    Time result;
    result = result.addTime(t1,t2);
    result.displayTime();
    return 0;
}