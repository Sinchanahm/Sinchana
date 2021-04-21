#include<stdio.h>
void main()
{
	int num=4578;
	int arr[10],i=0,j;
	int re;
	
	
	while(num!=0)
	{
		re=num%10;
		arr[i++]=re;
		
		num=num/10;
	}
	printf("The even numbers are\n");
	for(j=0;j<i;j++)
	{
		if(arr[j]%2==0)
			printf("%d\t",arr[j]);
	}
	printf("The odd numbers are\n");
	for(j=0;j<i;j++)
	{
		if(arr[j]%2!=0)
			printf("%d\t",arr[j]);
	}
	
}
