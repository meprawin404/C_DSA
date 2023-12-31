#include<iostream>
#include<string.h>
struct book input();
using namespace std;

struct book{

    private:
        int book_id;
        char tittle[20];
        float price;
    
    public:
        void display()
        {
            // cout<<c.book_id<<endl<<c.tittle<<endl<<c.price;
            cout<<"\nThe id of book is "<<book_id<<endl<<"Name of book is "<<tittle<<endl<<"Price of book is "<<price;
        }

        void input()
        {
            cout<<"Enter id tittle and price of book: ";
            cin>>book_id;
            cin.ignore();
            cin.getline(tittle,20);
            cin>>price;
        }
    };

int main()
{
    book b1,b2,b3;
    b1.input();
    b2.input();
    b3.input();
    b1.display();
    b2.display();
    b3.display();
    return 0;
}






