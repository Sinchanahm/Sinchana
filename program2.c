#include<stdio.h>

void main()
{
	int num=1556;
	int re;
	
	while(num!=0)
	{
		re=num%10;
		printf("%d\t",re);
		num=num/10;
	}
	printf("\n");
}
