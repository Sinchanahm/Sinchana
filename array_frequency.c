#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,j;
	int count;
	printf("Enter the size\n");
	scanf("%d",&n);
	int *arr = (int*)malloc(n*sizeof(int));
	int *freq = (int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		freq[i]=-1;
	}
	for(int i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				freq[j] = 0;
				
			}
			
			
		}
		if(freq[i]!=0)
		{
			freq[i]=count;
		}

	}
	
	printf("The frequency of each elements in the array\n");
	for(int i=0;i<n;i++)
	{
		if(freq[i]!=0)
		{
		printf("%d's: %d\n",arr[i],freq[i]);
		}
	}
}
