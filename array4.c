#include <stdio.h>
#include <stdlib.h>
void read_arr(int [],int);
void print_arr(int [],int);
int search(int [], int ,int);
void firstlast(int [],int ,int);

int main()
{
    int arr[10], arr_size,key,flag;
    printf("Enter the number of elements \n");
    scanf("%d", &arr_size);
    printf("Enter the elements\n");
    read_arr(arr, arr_size);
    printf("The array elements are \n");
    print_arr(arr, arr_size);
    printf("\nEnter the key to be searched\n");
    scanf("%d",&key);
    flag=search(arr,key,arr_size);
    if(flag==1)
    {
        firstlast(arr,key,arr_size);
    }


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

int search(int a[], int key, int n)
{

    for(int i=0;i<n;i++)
    {
        if(key==a[i])
        {
            printf("Search Successful\n");
            return 1;
        }
    }
    printf("Search failure\n");
    return 0;
}


void firstlast(int a[], int key, int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("\nThe first occurrence of the key is:%d\n",i+1);
            break;
        }

    }
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==key){
            printf("The last occurrence of the key is:%d\n",i+1);
            break;
        }
    }
}
