#include<iostream>
using namespace std;

class A{
    private:
        void privateFunction(){
            cout<<"This is private function"<<endl;
        }

    protected:
        void protectedFunction()
        {
            cout<<"This is protucted function"<<endl;
        }

    public:
        void publicFunction(){
            cout<<"This is public function"<<endl;
        }


    A(int a){

    }
};


class AV2 : public A{
    private:
        // A a;
        void privatefunctionAV2(){
            cout<<"This is private function of AV2"<<endl;
        }

    protected:
        void proctectedFunctionAV2(){
            cout<<"Thisis proctected function of AV2"<<endl;
        }

    public:
        void publicFunctionAV2(){
            cout<<"This is public function of AV2"<<endl;
            // a.protuctedFunction();
            protectedFunction();
            publicFunction();

        }


    AV2():A(2){

    }
};


int main()
{
    // A a;
    // a.privateFunction();
    // a.protuctedFunction();
    // a.publicFunction();

    AV2 a;
    a.publicFunctionAV2();
    return 0;
}