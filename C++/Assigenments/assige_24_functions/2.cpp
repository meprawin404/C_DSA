// 2. Define a function to find the highest value digit in a given number
// #include <iostream>
// void highest(int);
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     highest(num);
//     return 0;
// }

// void highest(int number)
// {
//     int max = 0, rem = 0;
//     while (number != 0)
//     {
//         rem = number % 10;
//         if (rem > max)
//         {
//             max = rem;
//         }
//         number = number / 10;
//     }

//     cout << max << " is highest digit";
// }



#include<iostream>
using namespace std;

void highest(int);
int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    highest(number);
    return 0;
}


void highest(int num){
    int rem=0, max=0;

    while (num!=0)
    {
        rem = num%10;
        if(rem>max){
            max = rem;
        }

        num = num/10;
    }

    cout<<"The highest digit in the number is "<<max;
}