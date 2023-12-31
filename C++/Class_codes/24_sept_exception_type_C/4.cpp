// #include<iostream>
// using namespace std;
// class Dollar;

// class Rupee
// {
//     private:
//         float rup;

//     public:
//         Rupee(){

//         }

//         Rupee(float x){
//             rup = x;
//         }

//         operator float(){
//             return rup;
//         }

//         int getR(){
//             return rup;
//         }


//         void display()
//         {
//             cout<<endl<<"Rupee = "<<rup;
//         }
// };


// class Dollar
// {
//     private:
//         float doll;

//     public:
//         Dollar()
//         {

//         }

//         Dollar(float x){
//             doll = x;
//         }

//         operator float(){
//             return doll;
//         }

//         operator Rupee()
//         {
//             return doll*100;
//         }

//         Dollar(Rupee r){
//             doll = r.getR()/100.0;
//         }

//         void display()
//         {
//             cout<<endl<<"Dollar = "<<doll;
//         }
// };

// int main()
// {
//     float x = 5;
//     float y = 6;


//     // <float to rupee and rupee to float>
//     Rupee r = x;
//     r.display();
//     x = r;

//     // <float to dollar and doller to float>
//     Dollar d = y;
//     d.display();
//     y = d;

//     // <doller to rupee>
//     r = d;
//     r.display();

//     // <rupee to doller>
//     d = r;
//     d.display();


//     return 0;
// }


/* float to doller
doller to float 

flaot to rupee
rupee to float

rupee to doller
doller rupee */


#include<iostream>
using namespace std;

class Rupee{
    private:
        float rup;

    public:
        Rupee()
        {

        }

        Rupee(float x){
            rup = x;
        }


        operator float(){
            return rup;
        }

        float getRup()
        {
            return rup;
        }

        

        void display()
        {
            cout<<"Rupee = "<<rup<<endl;
        }
};

class Dollar
{
    private:
        float doll;

    public:
        Dollar()
        {

        }


        Dollar(float x){
            doll = x;
        }

        operator float()
        {
            return doll;
        }

        operator Rupee()
        {
            return doll*132;
        }

        Dollar(Rupee r){
            doll = r.getRup()/132.0;
        }


        void display()
        {
            cout<<"Dollar = "<<doll<<endl;
        }
};


int main()
{
    float x = 2.2;
    float y = 3.4;


    Rupee r;
    r = x;
    r.display();
    x = (float)r;
    cout<<x<<endl;


    Dollar d;
    d = y;
    d.display();
    y = d;
    cout<<y<<endl;


    r = (Rupee)d;
    r.display();


    d = r;
    d.display();

    


    return 0;
}
