// 2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
// number of instance member variables and also define instance member functions to
// set values for time and display values of time.


#include<iostream>
using namespace std;

class Time
{
    private:
        int sec;
        int min;
        int hour;

    public:
        void setTime(int x, int y, int z)
        {
            hour = x;
            min = y;
            sec = z;
        }

        void showTime()
        {
            cout<<endl<<hour<<"hr "<<min<<"min "<<sec<<"sec";
        }

};


int main()
{
    Time t1;
    t1.setTime(3,10,22);
    t1.showTime();
    return 0;
}