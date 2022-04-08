#include <stdio.h>
int main()
{
    int i,n,w;
    scanf("%d",&i);
    for(int j=1;j<=i;j++)
    {
        n=0,w=0;
        scanf("%d %d",&n,&w);
        if(n==w || n>w)
        {
            printf("%s \n","YES");
        }
        else
        {
            printf("%s \n","NO");
        }
    }
}