//   function overloading

#include<iostream>
using namespace std;
float area(int);
int main()
{
    int r;
    cout<<"Enter radius of circle: ";
    cin>>r;
    cout<<"Area of circle is "<<area(r);
    return 0;
}

float area(int r)
{
    return 3.14*r*r;
}