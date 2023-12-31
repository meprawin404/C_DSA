// 1. Define a function to check whether a given number is a Prime number or not.
#include<iostream>
void isPrime(int);
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    isPrime(num);
    return 0;
}

void isPrime(int x){
    int flag = 0;
    if (x == 0 || x==1)
    {
        flag=1;
    }
    
    for (int i = 2; i < x; i++)
    {
        if (x%i==0)
        {
            flag = 1;
        }
        
    }
    if (flag==1)
    {
        cout<<x<<" isn't prime number";
    }
    else{
        cout<<x<<" is prime number";
    }
    
}

