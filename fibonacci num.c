#include <stdio.h>
int fib(int n)
{
    int a=1,b=1,c;
    if(n==1)
    {
        c=1;
    }
    else if(n==2)
    {
        c=1;
    }
    else{
    for(int t=1;t<=n-2;t++)
    {
        c=a+b;
        a=b;
        b=c;

    }
    }
    return c;
}
int main()
{
    int p;
    scanf("%d",&p);
    int k=fib(p);
    printf("%d",k);
}