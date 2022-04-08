#include <stdio.h>
# include<math.h>
int main()
{
    int i;
    for(int j=1;j<=i;j++)
    {
        int y,x;
        int r,q;
        scanf("%d %d",&y,&x);
        for(int e=y,e<=x;e++)
        {
            for(int d=y;d<=x;d++)
            {
                int z=fmin(e,d);
                for(int u=1;u<=z;u++)
                {
                    if(e%u==0 && d%u==0)
                    {
                        r=e;
                        q=d;
                        o=1;
                        break;
                    }
                }
                if(o==1)
                {
                    break;
                }
            }
            if(o==1)
            {
                break;
            }        
            }
             printf("%d",r);
             printf("%d",q);
    }
}