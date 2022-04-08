#include <stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    for(int j=1;j<=i;j++)
    {
        int r,c;
        scanf("%d %d",&r,&c);
        if(c<r)
        {
            printf("0");
        }
        else
        {
            if(c%r==0)
            {
                int p=c/r;
                printf("%d \n",p-1);
            }
            else{
                int p=c/r;
                p=floor(p);
                printf("%d \n",p);
            }
        }
    }
}