#include<iostream>
using namespace std;

class Flight
{
    public:
        void Search()
        {
            cout<<"search filght"<<endl;
        }

        virtual void Book(){
            cout<<"Book flight"<<endl;
        }
};

class Indigo : public Flight
{
    void Book()
    {
        cout<<"Indigo fight booked"<<endl;
    }
};

class Spicejet : public Flight
{
    void Book()
    {
        cout<<"Spicejet flight booked"<<endl;
    }
};


int main()
{
    Flight *flight1, *flight2;
    Indigo in;
    Spicejet sj;

    flight1 = &in;
    flight1 ->Search();
    flight1 ->Book();

    flight2 = &sj;
    flight2 ->Search();
    flight2 ->Book();
    return 0;
}