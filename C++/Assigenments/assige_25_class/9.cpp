// 9. Define a class Circle and define an instance member function to find the area of the
// circle.

#include<iostream>
using namespace std;
#define pi 3.14

class Area
{
    private:
        int r;
    
    public:
        void setData(int x)
        {
            r = x;
        }

        int showData();
};

int Area::showData()
{
    int result;
    result = pi*(r*r);
    return result;
}

int main()
{
    Area a;
    a.setData(5);
    cout<<a.showData();
    return 0;
}