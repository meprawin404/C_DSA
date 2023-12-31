#include<iostream>
using namespace std;

class Complex{
    private:
        int real;
        int img;

    public:
        void setData(int real, int img){
            this -> real = real;
            this -> img = img;
        }

        void showData()
        {
            cout<<endl<<"real = "<<real<<" img = "<<img;
        }

        Complex sumGreater(Complex c)
        {
            if ((real+img)>(c.real+c.img))
            {
                return *this;
            }
            return c;
            
        }
};

void input(Complex *p){
    int x,y;
    cout<<"Enter the real and img part of a complex number: ";
    cin>>x>>y;
    p->setData(x,y);
}

int main(){
    Complex c1,c2,c3;
    input(&c1);
    // c1.showData();
    c2.setData(11,11);
    c3 = c1.sumGreater(c2);
    c3.showData();
    return 0;
}