
// <premitive to user defined>

#include<iostream>
using namespace std;

class Complex
{
    private:
        int real;
        int img;

    public:
        void setData(int x, int y){
            real = x;
            img = y;
        }

        void showData()
        {
            cout<<"real = "<<real<<" img = "<<img<<endl;
        }

        Complex()
        {

        }

        Complex(int x){
            real = x;
            img = 0;
        }
}; 


int main()
{
    int x = 5;
    Complex c1;
    c1 = x;
    c1.showData();
    return 0;
}