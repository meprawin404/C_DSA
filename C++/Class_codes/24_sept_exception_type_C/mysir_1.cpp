
// <user define to premitive> 

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
            cout<<"real = "<<real<<" img = "<<img<<endl;
        }

        operator int()
        {
            return (real + img);
        }
};

int main()
{
    int x;
    Complex c1;
    c1.setData(3,4);
    x = c1;
    cout<<" x = "<<x;
    return 0;
}