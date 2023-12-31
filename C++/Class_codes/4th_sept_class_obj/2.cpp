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

        void showData();
};

void Complex::showData()
{
    cout<<endl<<real<<" + i"<<img;
}

int main()
{
    Complex c1,c2;
    c1.setData(2,5);
    c2.setData(22,81);
    c1.showData();
    return 0;
}