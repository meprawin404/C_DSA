#include<iostream>
#include<array>
using namespace std;

int main()
{
    int a[10] = {1,2,3,4,5};

    array <int,5>arr = {1,2,3,4,5};

    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<a[i]<<" ";
    // }


    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr.at(i)<<" ";
    }


    cout<<"First Element is "<<arr.front()<<endl;
    cout<<"Last Element is "<<arr.back()<<endl;
    
    
    return 0;
    
}