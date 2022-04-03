# include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    for (int j=1;j<=n;j++)
    {
    int c=0;
    scanf("%d",&a);
    char p[1000]={};
    scanf("%s",p);
    for(int i=0;i<1000;i++)
    {
        
        if(p[i]=='0' || p[i]=='5')
        {
            c=1;
            break;
        }
    }
    if(c==1)
    {
        printf("%s \n","YES");
    }
    else if(c==0){
        printf("%s \n","NO");
    }
    }
}
