// 4. Create a class Time which contains:
// - Hours
// - Minutes
// - Seconds
// Write a C++ program using operator overloading for the following:
// 1. = = : To check whether two Times are the same or not.
// 2. >> : To accept the time.
// 3. << : To display the time.

#include<iostream>
using namespace std;

class Time{
    private:
        int hour;
        int min;
        int sec;

    public:
        void readTime()
        {
            cout<<endl<<"Enter the Time";
            cout<<endl<<"Enter Hour : ";
            cin>>hour;
            cout<<endl<<"Enter Minute : ";
            cin>>min;
            cout<<endl<<"Enter second : ";
            cin>>sec;
        }

        void displayTime()
        {
            cout<<endl<<endl<<"The Time is";
            cout<<endl<<"Hour : "<<hour;
            cout<<endl<<"Minute : "<<min;
            cout<<endl<<"second : "<<sec;
        }

        friend Time cal(Time &);
        bool operator==(Time t1)
        {
            if (hour==t1.hour && min==t1.min && sec==t1.sec)
            {
                return true;
            }
            return false;
        }
};

Time cal(Time &t)
{
    Time temp;
    temp.sec = t.sec/60;
    temp.min = t.min/60;
    temp.hour = (t.min)+ (t.sec);
    temp.sec = t.sec % 60;
    temp.min = t.min % 60;
    return temp;
}

int main()
{
    Time t1,t2,t3;
    t1.readTime();
    t2.readTime();
    // t1 = cal(t1);
    // t2 = cal(t2);
    t1.displayTime();
    t2.displayTime();
    bool isEqual = (t1 == t2);
    if (isEqual)
    {
        cout<<endl<<"Both time are same";
    }
    else{
        cout<<endl<<"Both time aren't same";
    }

    return 0;
    
}


