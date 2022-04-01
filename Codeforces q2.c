#include<stdio.h>

int main()
{
    int i,l,n,u,count=0,co=0,j ;
    scanf("%d",&i);
    for(j=1;j<=i;j++)
    {
        scanf("%d %d %d", &l, &n, &u);
        if(l==1)
        {
            count=count+1;
        }
        if(n==1)
        {
            count=count+1;
        }
        if(u==1)
        {
            count=count+1;
        }
        if(count>=2)
        {
            co=co+1;
        }
        count=0;
    }
    printf("%d",co);
    

}