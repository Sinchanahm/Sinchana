#include <stdio.h>
#include <stdlib.h>

void read_arr(int [],int );
void print_arr(int [],int);
void print_odd(int [],int);

int main()
{
     // array declaration
    int arr[10], arr_size;
    printf("Enter the number of elements\n");
    scanf("%d", &arr_size);
    read_arr(arr, arr_size);
    printf("The array elements are \n");
    print_arr(arr, arr_size);
    printf("The  odd elements are\n");
    print_odd(arr, arr_size);
}

void read_arr(int a[],int n)
{
    int i;
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}

void print_arr(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}

void print_odd(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
            printf("%d\t",a[i]);
    }
}
