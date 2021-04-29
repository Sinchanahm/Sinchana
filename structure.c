#include <stdio.h>
#include <stdlib.h>

struct book
{
    int book_id;
    char book_title[20];
    char auth[20];
    float price;
};

int main()
{
    struct book book1={101,"India of my dreams","Mahatma Gandhi",2000.00};;
    printf("The values are\n");
    printf("%d%\n%s\n%s\n%f",book1.book_id,book1.book_title,book1.auth,book1.price);

}
