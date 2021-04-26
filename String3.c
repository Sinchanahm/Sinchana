#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str[20];
   printf("Enter the string\n");
   gets(str);
   for(int i=0;str[i]!='\0';i++)
   {
       if(str[i]==' ')
       {
           printf("\n");
           continue;
       }
       printf("%c",str[i]);
   }
}
