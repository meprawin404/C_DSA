#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout<<"Enter two number : ";
    cin>>a>>b;

    try
    {
        if(b == 0){
            throw "Invalid input";
        }

        if (b == 1)
        {
            throw b;
        }

        if(b==2){
            throw exception();
        }
        
        c = a/b;
    }catch(const char *msg){
        cout<<msg<<endl;
    }catch(int x){
        cout<<endl<<x;
    }catch(...){
        cout<<endl<<"last exception";
    }

    cout<<"Result = "<<c;
    return 0;
}