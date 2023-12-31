// 5. Define a class ReverseNumber and define an instance member function to find
// Reverse of a Number using class.


#include<iostream>
using namespace std;

class ReverseNumber{
    private:
        int num,rem,n_num;

    public:
        void setData(int x){
            num = x;
        }

        int showData();
};

int ReverseNumber::showData()
{
    n_num = 0;
    while (num!=0)
    {
        rem = num%10;
        n_num = n_num*10+rem;
        num = num/10;
    }

    return n_num;
    
}


int main()
{
    ReverseNumber num;
    num.setData(456);
    cout<<num.showData();
    return 0;
}