#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str;
    str=(char*)malloc(20*sizeof(char));
    printf("Enter the string\n");
    scanf("%s",str);
    printf("The string is:\n%s",str);

}
