#include<stdio.h>

void main()
{
	int num,i;
	printf("Enter the number\n");
	scanf("%d",&num);
	printf("The factors are\n");
	
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
			printf("%d\t",i);
	}
	
}
