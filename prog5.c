#include<stdio.h>
#include<stdlib.h>

int *MALLOC(int n,int p)
{
	int *r;
	r=(int *)malloc(n*p);
	return r;
}

void create(int *ptr,int n)
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&ptr[i]);
}

int add(int *ptr, int n)
{
	int i,s=0;
	for(i=0;i<n;i++)
		s=s+ptr[i];
		return s;
}

void main()
{
	int n=2;
	int sum=0;
	int *ptr;
	ptr=MALLOC(n,sizeof(int));
	create(ptr,n);
	sum=add(ptr,n);
	printf("The sum is %d\n",sum);
	
	
	
}
