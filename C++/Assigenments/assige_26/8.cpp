// 8. Define a class Bank and define member functions to read principal , rate of interest
// and year. Another member functions to calculate simple interest and display it.
// Initialise all details using constructor.



#include<iostream>
using namespace std;

class Bank
{
    private:
        float principal;
        float rate;
        float time;

    public:
        void readData()
        {
            cout<<"Enter principal, rate and time: ";
            cin>>principal>>rate>>time;
        }

        float cal_int()
        {
            return (principal*rate*time)/100;
        }

        Bank()
        {
            principal = 0;
            rate = 0;
            time = 0;
        }

};

int main()
{
    Bank B;
    B.readData();
    float result;
    result = B.cal_int();
    cout<<"The intrest amount is "<<result;
    return 0;
}