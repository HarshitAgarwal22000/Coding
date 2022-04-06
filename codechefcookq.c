#include <stdio.h>
#include <math.h>
int main()
{
    int i,j;
    double l;
    scanf("%d",&i);
    for(int j=1;j<=i;j++)
    {
        double r;
        int o;
        scanf("%lf",&l);
        
        r=l/4;
        o=ceil(r);
        if(l<4)
        {
            o=1;
        }
        printf("%d \n",o);

    }
}