#include <stdio.h>
    int main()
    {
        int n,dif,c=1;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            dif=n-i;
            if(n==2)
            {
                printf("NO");
                c=1;
                break;
            }
            if(i%2==0 && dif%2==0)
            {
                printf("YES");
                c=1;
                break;
            }
            else
            {
                c=0;
            }
        }
        if(c==0)
        {
            printf("NO");
        }
    }