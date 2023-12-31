// 9. Define a class Bill and define its member function get() to take detail of customer ,
// calculateBill() function to calculate electricity bill using below tariff :
// Upto 100 unit RS. 1.20 per unit
// From 100 to 200 unit RS. 2 per unit
// Above 200 units RS. 3 per unit.

#include<iostream>
using namespace std;

class Bill
{
    private:
        char name[50];
        int house_no;
        float bill_cm;
        char address[80];

    public:
        void get()
        {
            cout<<"Enter customer name house_number bill_consm and address: ";
            cin>>name;
            cin>>house_no;
            cin>>bill_cm;
            cin.ignore();
            cin.getline(address,80);
        }

        float calculateBill();
};

float Bill::calculateBill()
{
    float below_100, above_100, above_200;

    if (bill_cm<=100)
    {
        return below_100 = bill_cm*1.20;
    }
    else if(bill_cm>100 && bill_cm<200)
    {
        above_100 = bill_cm - 100;
        return (above_100*2)+120;
    }
    else
    {
        above_200 = bill_cm - 200;
        return (above_200*3)+120+200;
    }
}

int main()
{
    Bill B;
    B.get();
    float get_bill;
    get_bill = B.calculateBill();
    cout<<"The actual amount is "<<get_bill;
    return 0;
}