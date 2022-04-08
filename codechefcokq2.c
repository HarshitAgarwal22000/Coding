# include <stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    for(int j=1;j<=i;j++)
    {
        int w,r,x;
        scanf("%d %d %d",&w,&r,&x);
        int c=w*x;
        if(c<r)
        {
            printf("YES \n");
        }
        else{
            printf("NO \n");
        }
    }
}