#include<stdio.h>
int main()
{
    int d,i;;
    scanf("%d",&d);
    int max=0,min=1000000;
    for(int j=1;j<=d;j++)
    {
        scanf("%d",&i);
        int p[50];
        for(int t=0;t<i;t++)
        {
            scanf("%d",p[t]);
            if(p[t]>max)
            {
                max=p[t];
            }
            if(p[t]<min)
            {
                min=p[t];
            }
        }
    }
    int a=max-min;
    printf("%d",a);

}