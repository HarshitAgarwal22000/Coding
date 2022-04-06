#include <stdio.h>
int main()
{
    int i,n,l,k;
    scanf("%d",&i);
    for(int j=1;j<=i;j++)
    {
        scanf("%d %d",&l,&k);
        if(k*30>=l){
            printf("%s","NO");
        }
        else if(k*30<l)
        {
            printf("%s","YES");
        }
    }
}
