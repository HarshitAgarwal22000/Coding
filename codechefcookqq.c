#include <stdio.h>
int main()
{
    int i,l,j,count;
    scanf("%d",&j);
    for(int i=1;i<=j;i++){
        scanf("%d",&l);
        int a[1000]={};
        for(int o=0;o<1000;o++)
        {
            count=0;
            if(a[o]%2==0)
            {
                count=count+1;
            }
            printf("%d",count);
        }
    }
}