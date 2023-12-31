// structure with function 

#include<stdio.h>
struct book
{
    int book_id;
    char book_n[20];
    float b00k_p;
};

struct book input()
{
    struct book b;
    printf("Enter the Book id, book title and price of book: ");
    scanf("%d",&b.book_id);
    fflush(stdin);
    fgets(b.book_n,20,stdin);
    scanf("%f",&b.b00k_p);
    return b;
}

void display(struct book c)
{
    printf("\n %d %s %.2f",c.book_id,c.book_n,c.b00k_p);
}

int main()
{
    struct book b1 = {234,"cpp",234.1};
    // struct book b2;
    // b2 = input();
    display(b1);
    // display(b2);
    return 0;
}