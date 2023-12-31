// 7. Define a class Box and write a program to enter length, breadth and height and
// initialise objects using constructor also define member functions to calculate volume
// of the box.

#include<iostream>
using namespace std;

class Box
{
    private:
        int length;
        int breath;
        int height;


    public:
        Box()
        {
            length = 0;
            breath = 0;
            height = 0;
        }

        Box(int l, int b, int h)
        {
            length = l;
            breath = b;
            height = h;
        }

        int cal_vol();
};

int Box::cal_vol()
{
    return length * breath * height;
}

int main()
{
    Box b(10,8,10);
    int result;
    result = b.cal_vol();
    cout<<result;
    return 0;
}
