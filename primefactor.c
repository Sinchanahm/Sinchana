#include<stdio.h>

void main()
{
	int num,i,k,flag;
	printf("Enter the number\n");
	scanf("%d",&num);
	
	printf("The prime factors are\n");
	for(i=2;i<=num;i++)
	{
	
		if(num%i==0)
		{
			flag=1;
			for(k=2;k<=i/2;k++)
			{
				if(i%k==0)
				{
					flag=0;
					break;
				}
		}
		if(flag==1)
			printf("%d\t",i);
	}
		
	}
}
