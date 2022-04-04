#include <stdio.h>
#include <ctype.h>
int main()
{
    char c[1000]={};
    int count,count_1;
    scanf("%s",c);
    for(int i=0;i<1000;i++)
    {
        if(islower(c[i]))
        {
            count_1=count_1+1;
        }
        else if(isupper(c[i]))
        {
            count=count+1;
        }
    }
    for(int j=0;j<1000;j++)
    {
        
        if(count_1>count)
        {
            printf("%c",tolower(c[j]));
        }
        else if(count>count_1)
        {
            printf("%c",toupper(c[j]));
        }
        else if(count==count_1)
        {
            printf("%c",tolower(c[j]));
        }
    }

}