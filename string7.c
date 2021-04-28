#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[200],ch;
    int occur[200]={0};
    int max=-1;

    printf("Enter the string\n");
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        occur[str[i]]++;
    }

    for(int i=0;str[i]!='\0';i++)
    {
        if(max<occur[str[i]])
        {
            max=occur[str[i]];
            ch=str[i];
        }
    }

    printf("The maximum occured character is %c",ch);

}
