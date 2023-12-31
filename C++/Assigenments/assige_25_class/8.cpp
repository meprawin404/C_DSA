// 8. Define a class Rectangle and define an instance member function to find the area of
// the rectangle.

#include<iostream>
using namespace std;

class Rect
{
    private:
        int length,breath;
    
    public:
        void setData(int x, int y)
        {
            length = x;
            breath = y;
        }

        int showData();
};

int Rect::showData()
{
    int result;
    result = length*breath;
    return result;
}

int main()
{
    Rect r;
    r.setData(5,5);
    cout<<r.showData();
    return 0;
}