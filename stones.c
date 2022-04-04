#include <stdio.h>
int main()
{
    int n,pos;
    char s[1000];
    scanf("%d",&n);
    scanf("%s",s);
    for(int i=1;i<=1000;i++)
    {
        if(s[i]!=s[i-1])
        {
            pos=i;
            break;
        }

    }
    printf("%d",pos-1);
}