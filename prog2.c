#include<stdio.h>




void accept(int *a, int *b)
{
	printf("Enter two numbers\n");
	scanf("%d%d",a,b);
}

int add(int a, int b)
{
	return a+b;
}

void result(int c)
{
	printf("The sum is %d\n",c);
}


void main()
{
	int a,b,c;
	accept(&a,&b);
	c=add(a,b);
	result(c);
	
}
