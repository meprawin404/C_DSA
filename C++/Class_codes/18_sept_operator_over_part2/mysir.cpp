// overload pre-increment and post-increment

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

        Complex operator++(){
            Complex temp;
            temp.real = ++real;
            temp.img = ++img;
            return temp;
        }

        Complex operator++(int)
        {
            Complex temp;
            temp.real = real++;
            temp.img = img++;
            return temp;
        }
};


int main()
{
    Complex c1,c2,c3;
    c1.setData(3,3);
    c2 = c1++;
    c1.showData();
    c2.showData();
    return 0;
}