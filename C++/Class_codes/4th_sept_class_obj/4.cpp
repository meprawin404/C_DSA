#include<iostream>
using namespace std;
class item
{
    private:
        int a,b;
        int static k;
    public:
        void setA(int x ){ a=x; }
        void setB(int y) { b=y; }
        int getA(){return a;}
        int getB(){return b;}
        void setK(int z){ k=z;}
        int getK(){ return k;}

};

int item::k;

int main()
{
    item i1,i2;
    // i1.setA(5);
    // cout<<i1.getA();

    i1.setK(4);
    cout<<i2.getK();
    return 0;

}