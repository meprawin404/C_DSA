#include<iostream>
using namespace std;

class Dollar
{
    private:
        int doll;

    public:
        Dollar(){

        }

        Dollar(int x){
            doll = x;
        }

        operator int(){
            cout<<endl<<"operator int called";
            return doll;
        }

        void display()
        {
            cout<<endl<<" Dollar = "<<doll;
        }
};

int main()
{
    int x = 5;
    Dollar d = x;
    x = d;

    d.display();
    return 0;
}