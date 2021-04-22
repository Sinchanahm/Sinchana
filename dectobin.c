#include<stdio.h>

void main()
{
	int num,n,rem,bin=0,count=1;
	printf("Enter decimal number\n");
	scanf("%d",&num);
	n=num;
	
	
	while(n!=0)
	{
		rem=n%2;
		n=n/2;
		bin=bin+rem*count;
		count=count*10;
		
	}
	
	printf("The binary number is %d\n",bin);
}
