#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter the size\n");
	scanf("%d",&n);
	int *ptr=(int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
		scanf("%d",&ptr[i]);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++)
		{
			if(ptr[i]==ptr[j])
			{
				printf("Array not distinct");
				exit(0);
			}
		}
	}
		printf("Array distinct\n");
}
