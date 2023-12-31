#include<iostream>
#include<array>
using namespace std;

int main()
{
    array <int,5>arr = {1,2,3,4,5};
    array <int,5>arr2 = {6,7,8,9,10};

    cout<<"before swap"<<endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr.at(i)<<" ";
    }

    cout<<endl;

    for (int i = 0; i < arr2.size(); i++)
    {
        cout<<arr2[i]<<" ";
    }

    cout<<endl;

    cout<<"After swap "<<endl;

    arr.swap(arr2);

    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr.at(i)<<" ";
    }

    cout<<endl;

    for (int i = 0; i < arr2.size(); i++)
    {
        cout<<arr2[i]<<" ";
    }


    return 0;
    
    
}