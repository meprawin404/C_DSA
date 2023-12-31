// 4. Write a C++ program to calculate the area of a circle

#include<iostream>
using namespace std;
int main()
{
    const float pi = 3.14;
    float radius;
    cout<<"Enter the radius of circle: ";
    cin>>radius;
    cout<<"The area of circle is "<<pi*(radius*radius);
    return 0;

}