#include<stdio.h>

int add(int ,int );

void main()
{
	int p,q,r;
	printf("Enter two values\n");
	scanf("%d%d",&p,&q);
	r=add(p,q);
	printf("The sum is %d\n",r);
	
}

int add(int p, int q)
{
	return p+q;
}
