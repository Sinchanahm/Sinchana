#include<stdio.h>

int happyNumber(int i)
{
	int remaind,sum=0;
	while(i!=0)
	{
		remaind=i%10;
		sum=sum+(remaind*remaind);
		i=i/10;	
	}
	return sum;
}

void main()
{
	int num,n;
	printf("Enter the number\n");
	scanf("%d",&num);
	n=num;
	
	while(n!=1 && n!=4)
	{
		n=happyNumber(n);
	}
	
	if(n==1)
		printf("%d is a happy number\n",num);
	else
		printf("%d is not a happy number\n",num);
	
}
