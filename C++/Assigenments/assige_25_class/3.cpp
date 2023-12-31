// 3. Define a class Factorial and define an instance member function to find the Factorial
// of a number using class.

#include<iostream>
using namespace std;
class Factor
{
    private:
        int num;
    public:
        void input()
        {
            cout<<"Enter a number: ";
            cin>>num;
        }
        void showFact();
};

void Factor::showFact()
{
    int i;
    for ( i = 1; i <= num; i++)
    {
        if (num%i==0)
        {
            cout<<" "<<i;
        }
        
    }
    
}

int main()
{
    Factor num;
    num.input();
    num.showFact();
    return 0;
    
}


