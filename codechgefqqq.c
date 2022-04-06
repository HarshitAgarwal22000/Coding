#include <stdio.h>
int main()
{
    int i,j,l,max=0,count=0,count_1=0;
    scanf("%d",&j);
    for(int i=1;i<=j;i++)
    {
        scanf("%d",&l);
        int q=0;
        int a[1000]={};
        int p[1000];
        for(int y=0;y<l;y++)
        {
            scanf("%d",&a[y]);
            if(a[y]>max)
            {
                max=a[y];
            }

        }
        for(int e=1;e<=max;e++)
        {
            for(int u=0;u<l;u++)
            {
                if(a[u]==e)
                {
                    count=count+1;
                }
            }
            p[q]=count;
            q=q+1;
        }
        for(int z=0;z<1000;z++)
        {
            if(a[z]<2)
            {
                count_1=count_1+1;
            }
        }
        printf("%d",count_1);
    }

}