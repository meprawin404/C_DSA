#include<iostream>
struct book input();
void display(struct book c);
using namespace std;
struct book{
    int book_id;
    char tittle[20];
    float price;
};

int main()
{
    struct book b1;
    b1 = input();
    display(b1);
    return 0;
}


// struct book input()
// {
//     struct book b;
//     cout<<"Enter the id name and price of book: ";
//     cin>>b.book_id>>b.tittle>>b.price;
//     return b;
// }


struct book input()
{
    struct book b;
    cout<<"Enter id tittle and price of book: ";
    cin>>b.book_id;
    cin.ignore();
    cin.getline(b.tittle,20);
    cin>>b.price;
    return b;
}


void display(struct book c)
{
    // cout<<c.book_id<<endl<<c.tittle<<endl<<c.price;
    cout<<"The id of book is "<<c.book_id<<endl<<"Name of book is "<<c.tittle<<endl<<"Price of book is "<<c.price;
}