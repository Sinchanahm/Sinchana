#include<stdio.h>
#include<stdlib.h>
int main()

{
	char str[100];
	printf("Enter the string\n");
	gets(str);
	printf("%c",str[0]);
	for(int i=1;str[i]!='\0';i++)
	{
		if(str[i]==' ' && isupper(str[i+1]))
		{
			printf("%c",str[i+1]);
		}
	}
}
