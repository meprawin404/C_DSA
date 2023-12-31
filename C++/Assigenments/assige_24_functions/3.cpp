// 3. Define a function to calculate x raised to the power y.

// #include<iostream>
// int cal(int,int);
// using namespace std;
// int main(){
//     int num,pow;
//     cout<<"Enter a number n power to be increased: ";
//     cin>>num>>pow;
//     cout<<"The result is "<<cal(num,pow);
//     return 0;
// }

// int cal(int num, int pow)
// {
//     int result = 1;
//     for ( int i = 1; i <= pow; i++)
//     {
//         result = result * num;
//     }
//     return result;
// }

#include<iostream>
using namespace std;
int cal(int,int);

int main()
{
    int num,pow;
    cout<<"Enter a number and it's power to be raised: ";
    cin>>num>>pow;
    int result;
    result = cal(num,pow);
    cout<<"The answe is "<<result;
    return 0;
}

int cal(int num, int pow){
    int temp=1;
    int i;
    if(pow==1){
        return num;
    }

    if(pow==0){
        return 1;
    }

    for ( i = 0; i < pow ; i++)
    {
        temp = temp * num;
    }

    return temp;
    
}