#include <stdio.h>
# include<math.h>
int main()
{
    int i;
    scanf("%d",&i);
    for(int j=1;j<=i;j++)
    {
        int o=0;
        int y,x;
        int r,q;
        scanf("%d %d",&y,&x);
        for(int e=y;e<=x;e++)
        {
            for(int d=y+1;d<=x;d++)
            {
                int z=fmin(e,d);
                for(int u=z;u>=2;u--)
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
            if(r==q)
            {
               printf("%d \n",-1);
            }
            else
            {
             printf("%d ",r);
             printf("%d \n",q);
            }
    }
}