// 10. Write a C++ program to add all the numbers of an array of size 10
#include<iostream>
using namespace std;
int main()
{
    int arr[3];
    int i;
    for ( i = 0; i < 3; i++)
    {
        cout<<"Enter "<<i<<" element"<<endl;
        cin>>arr[i];
    }
    int result=0;
    for ( i = 0; i < 3; i++)
    {
        result = result + arr[i];
    }
    cout<<"The sum of all number is "<<result;
    return 0;
    
}