#include <stdio.h>
#include <stdlib.h>

void read_arr(int [],int);
void print_arr(int [],int);
int ret_max(int [],int);

int main()
{
      // array declaration
    int arr[10], arr_size;
    printf("Enter the number of elements \n");
    scanf("%d", &arr_size);
    printf("Enter the elements\n");
    read_arr(arr, arr_size);
    printf("The array elements are \n");
    print_arr(arr, arr_size);
    printf("\nThe  maximum element in the arrays is %d\n", ret_max(arr, arr_size));
    return 0;
}

void read_arr(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
    }
}

void print_arr(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
         printf("%d\t",a[i]);
    }
}

 int ret_max(int a[],int n)
 {
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }

    return max;
 }
