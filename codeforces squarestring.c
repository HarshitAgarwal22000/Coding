#include <stdio.h>
#include <string.h>
int main()
{
    
    int i;
   
    scanf("%d",&i);
    for(int j=1;j<=i;j++)
    {
         char p[1000];
    
    int m=1,pos,n=0;;
    int ch;
    char l[1000],u[1000],y;
        scanf("%s",p);
        if(strlen(p)%2==1)
        {
            ch=1;
        }
        else
        {
            y=p[0];
            l[0]=y;
            for(int k=1;k<strlen(p);k++)
            {
                if(p[k]==y)
                {
                    pos=k;
                    break;
                }
                else{
                    l[m]=p[k];
                    m=m+1;
                }
            }
            for(int e=pos;e<strlen(p);e++)
            {
                u[n]=p[e];
                n=n+1;
            }
            for(int q=0;q<strlen(p);q++)
            {
                printf("%s",l[q]);
                printf("%s",u[q]);
            }
        }
        

    }
}
