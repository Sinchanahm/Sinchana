#include<stdio.h>

struct add
{
	int a;
	int b;
};

void main()
{
	struct add p;
	int s=0;
	printf("Enter two numbers\n");
	scanf("%d%d",&p.a,&p.b);
	s=p.a + p.b;
	printf("The sum is %d\n", s);
	
	
}
