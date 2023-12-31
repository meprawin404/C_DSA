#include<iostream>
using namespace std;
int main()
{
    int *p = new int(10); //single 4 byte memory will be created
    int *a = new int[10]; //array of size 10
    if(!p || !a)//or P == NULL
    {
        cout<<("Insufficient memory\n");
        return 0;
    } 

    printf("Enter ten values\n");
    for (int i = 0; i < 10; i++)
    {
        cin>>a[i];
    }

    printf("The value are:\n");
    for (int i = 0; i < 10; i++)
    {
        cout<<a[i]<<" "<<endl;
    }
    delete p;
    delete []a;
    
    return 0;

    // cout<<*p;
}