#include<iostream>
using namespace std;

class Complex
{
    private:
        int real;
        int img;
    
    public:
        void setData(int x, int y)
        {
            real = x;
            img = y;
        }

        void showData()
        {
            cout<<endl<<"real = "<<real<<" "<<"img = "<<img;
        }
};


int main()
{
    Complex c1,c2;
    c1.setData(2,4);
    c2.setData(3,9);
    c1.showData();
    c2.showData();
    return 0;
}