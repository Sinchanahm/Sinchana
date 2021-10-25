#include<stdio.h>

int main()
{
	int arr[100][100],b[100][100],n;
	printf("enter the size:\n");
	scanf("%d",&n);
	printf("Enter the matrix\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		scanf("%d",&arr[i][j]);
		}
	}
	
	for(int j=n-1;j>=0;j--)
	{
		for(int i=0;i<n;i++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	
	}
	
}
