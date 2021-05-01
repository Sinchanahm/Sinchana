#include <stdio.h>
#include <stdlib.h>

int main()

{
    int arr[20],max,n,ind;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    max=arr[0];
    ind=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            ind=i;
        }

    }
    printf("The largest element is %d\n",max);
    printf("elements before largest are\n");
    for(int j=0;j<ind;j++)
    {
        printf("%d\t",arr[j]);
    }
    printf("\nElements after largest\n");
    for(int j=ind+1;j<n;j++)
    {
        printf("%d\t",arr[j]);
    }

}
