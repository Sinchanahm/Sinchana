#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct book
{
    char title[20];
    char auth[20];
    float price;
    int pages;

};

int main()
{
    struct book books[20];
    char name[20];
    int n,i;
    float amount;
    printf("Enter the number of books\n");
    scanf("%d",&n);
    printf("Enter the details\n");
    for(i=0;i<n;i++)
    {
        scanf("%s%s%f%d",books[i].title,books[i].auth,&books[i].price,&books[i].pages);

    }
    printf("Details\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n%s\n%f\n%d\n",books[i].title,books[i].auth,books[i].price,books[i].pages);

    }
    printf("Updating the price of the books\n");
    printf("Enter the book title whose price is to be updated\n");
    scanf("%s",name);
    printf("Enter the amount to be updated\n");
    scanf("%f",&amount);
    for(i=0;i<n;i++)
    {
        if(strcmp(name,books[i].title)==0)
        {
            books[i].price=books[i].price+amount;
            printf("The updated values are\n");
            printf("%s\n%s\n%f\n%d",books[i].title,books[i].auth,books[i].price,books[i].pages);
            return 0;
        }
    }
    printf("book not found!!\n");





}
