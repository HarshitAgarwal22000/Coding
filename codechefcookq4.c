#include <stdio.h>
int main()
{
    int i,count=0,k;
    scanf("%d",&i);
    for(int j=1;j<=i;j++)
    {
        count=0;
        scanf("%d",&k);
        char s[k]={};
        for(int e=0;e<k;e++)
        {
            scanf("%s",s[e]);
        }
        for(int y=1;y<=k;y++)
        {
            if(y[k]==1 && y[k-1]==1)
            {
                count=count+1;
            }
        }
    }
    printf("%d",count);

}