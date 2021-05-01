#include <stdio.h>
#include <stdlib.h>
#define max 5

void push(int s[],int *top,int item)
{
    if(*top==(max-1))
    {
        printf("stack overflow\n");
        return;
    }
    (*top)++;
    s[*top]=item;
}

void pop(int s[],int *top)
{
    int ele;
    if(*top==-1)
    {
        printf("Stack underflow\n");
        return;
    }
    ele=s[*top];
    (*top)--;
    printf("The item deleted is %d\n",ele);
}

void display(int s[],int top)
{
    int i;
    if(top==-1)
    {
        printf("Stack underflow\n");
        return;
    }
    for(i=top;i>=0;i--)
        printf("%d\t",s[i]);
}
int main()
{
    int s[max];
    int top=-1,ch,item;
    for(;;)
    {
        printf("press 1.add\t 2.delete\t 3.display\t 4.exit");
        printf("\nEnter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the item to be inserted\n");
                    scanf("%d",&item);
                    push(s,&top,item);
                    break;
            case 2:pop(s,&top);
                   break;
            case 3:display(s,top);
                   break;
            case 4:exit(0);

        }
    }


}
