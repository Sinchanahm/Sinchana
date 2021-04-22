#include<stdio.h>

void main()
{
	int num,i,flag;
	printf("Enter the number\n");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		if(num==i*(i+1))
		{
			flag=1;
			break;
		}
	}
	
	(flag==1)?printf("It is a pronic number"):printf("It is not a pronic number\n");
	
}
