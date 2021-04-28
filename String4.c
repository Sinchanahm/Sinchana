#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char str[20],a[20];
    int k;
    printf("Enter the string\n");
    gets(str);


   for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            a[k]=str[i];
            k++;
        }
        else{
            a[k]='\0';
            printf("%s",strrev(a));
            printf(" ");
            k=0;
        }
    }
    a[k]='\0';
    printf("%s",strrev(a));
}
