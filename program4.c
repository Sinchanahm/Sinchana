#include<stdio.h>
#include<stdlib.h>

void main()
{
	int num=5;
	int i;
	
	for(i=2;i<num/2;i++)
	{
		if(num%i==0)
		{
			printf("Not a prime number");
			exit(0);
			}
					
	}
	printf("Prime number\n");
}
