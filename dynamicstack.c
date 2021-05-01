#include <stdio.h>
#include <stdlib.h>
int* stackfull(int *stack,float *cap)
{
    printf("Stack is getting doubled\n");
    stack=(int*)realloc(stack,2*(*cap)*sizeof(int));
    (*cap)=(*cap)*2;
    return stack;
}

int* push(int *stack,int *top,float *cap,int item)
{
    if(*top>=(*cap-1))
    {
      stack=stackfull(stack,cap);
    }
    (*top)++;
    *(stack+(*top))=item;
    return stack;

}


void pop(int *stack,int *top)
{
    int item;
    if(*top==-1)
    {
        printf("Stack underflow\n");
        return;
    }
    item=stack[*top];
    printf("The item deleted is %d",item);
    (*top)--;

}

void display(int *stack,int top)
{
    if(top==-1)
    {
        printf("Stack underflow\n");
        return;
    }
    printf("The elements are\n");
    for(int i=top;i>=0;i--)
    {
        printf("%d\t",stack[i]);
    }
}

int main()
{
    int *stack,ch;
    int item,top=-1;
    float cap=0.5;
    stack=(int*)malloc(cap*sizeof(int));
    if(stack==NULL)
    {
        printf("Insufficient memory\n");
        return 0;
    }
    for(;;)
    {
        printf("press 1.add\t 2.delete\t 3.display\t 4.exit");
        printf("\nEnter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the element to be inserted\n");
                    scanf("%d",&item);
                    stack=push(stack,&top,&cap,item);
                    break;
            case 2:pop(stack,&top);
                    break;
            case 3:display(stack,top);
                break;
            case 4: exit(0);
        }
    }



}

