#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[200];
    int count=0,k;
    printf("Enter the string:\n");
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        k=(int)str[i];
        if(k!=32)
            continue;
        else
            count++;
    }
    count++;
    printf("The word count is:%d",count);
}


