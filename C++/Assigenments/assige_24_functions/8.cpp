// 8. Define overloaded functions to calculate area of circle, area of rectangle and area of triangle

#include<iostream>
using namespace std;

inline int area(float r);
inline int area(int w, int l);
inline float area(float b, float h);

int main()
{
    int radius, width, length;
    float breath, hight;
    cout<<"Enter the radius of circle: ";
    cin>>radius;
    cout<<"Enter the width and length of rectangle: ";
    cin>>width>>length;
    cout<<"Enter the breath and hight of triangle: ";
    cin>>breath>>hight;
    cout<<"\nThe area of circle is "<<area(radius);
    cout<<"\nThe area of rectangle is "<<area(width,length);
    cout<<"\nThe area of trangle is "<<area(breath,hight);
    return 0;
}

int area(float r){
    float pi = 3.14;
    return pi*(r*r);
}

int area(int w, int l){
    return w*l;
}

float area(float b, float h){
    float result;
    result = 0.5*b*h;
    return result;    
}