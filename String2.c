#include <stdio.h>
#include <stdlib.h>

void accept(char *str)
{
    printf("Enter the string\n");
    scanf("%s",str);
}
void display(char *str)
{
     printf("The string is:\n%s",str);
}

int main()
{
    char *str;
    str=(char*)malloc(20*sizeof(char));
    accept(str);
    display(str);
}
