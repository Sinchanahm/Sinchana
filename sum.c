#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,sum;
	printf("enter the size\n");
	scanf("%d",&n);
	printf("Enter the sum\n");
	scanf("%d",&sum);
	int *arr = (int*)malloc(n*sizeof(int));
	printf("Enter the values\n");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<n;i++)
	{
		int a=i;
		for(int j=i+1;j<n;j++)
		{
			int b=j;
			if(arr[i]+arr[j]==sum)
			{
				printf("indices are found at %d and %d\n",a,b);
				exit(0);
			}
		}
	
	}

			
	
}
