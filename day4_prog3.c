#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char str1[100],str2[100];
	printf("Enter first string:");
	scanf("%s",str1);
	printf("Enter second string:");
	scanf("%s",str2);
	int j;
	for(int i=0;i<strlen(str1);i++)
	{
		char a=str1[0];
		for(j=0;j<strlen(str1)-1;j++)
		{
			str1[j] = str1[j+1];
		}
		str1[j] = a;
		if(strcmp(str1,str2)==0)
		{
			printf("str2 is a rotation of str1\n");
			exit(0);
		}
		
	}
	printf("str2 is not a rotation of str1");
}
