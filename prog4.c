#include<stdio.h>
#include<stdlib.h>

void main()
{
	int n=2;
	int *ptr;
	int i;
	int sum=0;
	
	ptr=(int *)malloc(n*sizeof(int));
	
	if(ptr==NULL)
	{
		printf("Insufficient memory\n");
		exit(0);
	}
	printf("Enter two numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);	
	}
	for(i=0;i<n;i++)
	{
	sum=sum+ptr[i];
	}
	
	printf("The sum is %d\n",sum);
	
	
	
}
