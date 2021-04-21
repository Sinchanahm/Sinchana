#include<stdio.h>

void main()
{
	int num=67890;
	int arr[10];
	int i=0,k;
	int re;
	
	while(num!=0)
	{
		re=num%10;
		arr[i++]=re;
		num=num/10;
	}
	for(k=i-1;k>=0;k--)
		printf("%d\t",arr[k]);
}
