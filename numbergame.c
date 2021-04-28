#include <stdio.h>
#include <stdlib.h>

/*void accept(int val,int *max,int *min)
{
    static int ma=0;
    static int mi=-1;
    max=ma;
    min=mi;
    if(val>max)
        *max=val;
    if(val<min)
        *min=val;



}*/

int main()
{
    char str[200];
    int val;
    int max=0,min=1000000;
    for(;;)
    {
        printf("Enter the element:\n");
        gets(str);
        if(strcmp(str,"done")==0)
            break;
        for(int i=0;str[i]!='\0';i++)
        {
            if(isdigit(str[i]))
            {
                val=atoi(str);
                if(val>max)
                    max=val;
                if(val<min)
                    min=val;
            }
        }



    }
    printf("The largest element is %d \n smallest element is %d",max,min);
}


