#include<iostream>
#include<string.h>
struct book input();
using namespace std;

struct book{
    int book_id;
    char tittle[20];
    float price;

    void display()
    {
        // cout<<c.book_id<<endl<<c.tittle<<endl<<c.price;
        cout<<"The id of book is "<<book_id<<endl<<"Name of book is "<<tittle<<endl<<"Price of book is "<<price;
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
    book b1 = {1,"c",234.2f};
    book b2,b3;
    b2.book_id = 2;
    strcpy(b2.tittle,"java");
    b2.price = 546.9f;
    b3.input();
    b1.display();
    b2.display();
    b3.display();
    return 0;
}






