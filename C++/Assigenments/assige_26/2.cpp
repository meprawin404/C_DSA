// 2. Define a class Time to represent a time with instance variables h,m and s to store
// hour, minute and second. Also define following member functions
// a. void setTime(int,int,int)
// b. void showTime()
// c. void normalize()
// d. Time add(Time)


#include<iostream>
using namespace std;

class Time
{
    private:
        int h;
        int m;
        int s;

    public:
        void setData(int x, int y, int z)
        {
            h = x;
            m = y;
            s = z;
        }

        void showData()
        {
            cout<<endl<<h<<"hr "<<m<<"min "<<s<<"sec";
        }

        Time add(Time t)
        {
            Time temp;
            temp.s = s + t.s;
            temp.m = m + t.m + (temp.s/60);
            temp.h = h + t.h + (temp.m/60);
            temp.m = (m+t.m)/60;
            temp.s = (s+t.s)/60;
            return temp;
        }
};

int main()
{
    Time t1,t2,t3;
    t1.setData(10,20,55);
    t2.setData(10,40,55);
    t3 = t1.add(t2);
    t3.showData();
    return 0;
}