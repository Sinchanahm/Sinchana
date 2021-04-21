#include<stdio.h>
#include<stdlib.h>

void main()
{
	int n,flag;
	int i,j;
	scanf("%d",&n);
	
	for(i=2;i<=n;i++)
	{
		flag=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
			flag=0;
			break;
			}
		}
				if(flag==1)
					printf("%d\t",i);
				
	}
}
