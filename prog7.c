#include<stdio.h>

struct add
{
	int a;
	int b;
};

int sum(struct add r)
{	
	return r.a+r.b;
}


void main()
{
	int y=0;
	

	
	struct add p;
	scanf("%d%d",&p.a,&p.b);
	y=sum(p);
	printf("The sum is %d",y);
}
