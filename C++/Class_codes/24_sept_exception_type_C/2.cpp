#include<iostream>
using namespace std;

class Rupee
{
    private:
        int rup;

    public:
        Rupee()
        {

        }

        Rupee(int x){
            rup = x;
        }

        operator int()
        {
            cout<<endl<<"operator int called";
            return rup;
        }

        void display()
        {
            cout<<endl<<"Rupee = "<<rup;
        }
};

int main()
{
    int x = 5;
    Rupee r = x;
    x = r;
    r.display();
    return 0;
    
}