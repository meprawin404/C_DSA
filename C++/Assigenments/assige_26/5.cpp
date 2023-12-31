// 5. Define a class Date and write a program to Display Dateand initialise date object
// using Constructors.


#include<iostream>
using namespace std;

class Date
{
    private:
        int y;
        int m;
        int d;

    public:

        Date()
        {
            y = 0;
            m = 0;
            d = 0;
        }

        Date(int a, int b, int c)
        {
            y = a;
            m = b;
            d = c;
        }

        void Display()
        {
            cout<<endl<<y<<"/"<<m<<"/"<<d;
        }
};

int main()
{
    Date d(2020,12,20);
    d.Display();
    return 0;
}