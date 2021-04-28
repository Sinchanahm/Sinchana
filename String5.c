#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct str
{
    char cont[100];
};

int main()
{
        struct str str1,str2;
        char temp;
        int flag=0,i;
        printf("Enter the first string\n");
        gets(str1.cont);
        printf("Enter the second string\n");
        gets(str2.cont);
        int len;


        if(strlen(str1.cont)!=strlen(str2.cont))
        {
            printf("They are not anagrams\n");
        }
        len=strlen(str1.cont);

        for(i=0;i<len;i++)
        {
            for(int j=i+1;j<len-1;j++)
            {
                if(str1.cont[i]>str1.cont[j])
                {
                    temp=str1.cont[i];
                    str1.cont[i]=str1.cont[j];
                    str1.cont[j]=temp;
                }
                if(str2.cont[i]>str2.cont[j])
                {
                    temp=str2.cont[i];
                    str2.cont[i]=str2.cont[j];
                    str2.cont[j]=temp;
                }
            }
        }

       for(i=0;i<len;i++)
       {
           if(str1.cont[i]!=str2.cont[i])
           {
               printf("Not Anagrams\n");
               return 0;
           }
       }


            printf("anagrams\n");
}
