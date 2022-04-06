#include <stdio.h>
int eno,b;
char name[1000]={},dsig[1000]={};
int inp()
{
    scanf("%d",&eno);
    scanf("%d",&b);
    scanf("%s",name);
    scanf("%s",dsig);


}
int ou()
{
    printf("%d",eno);
    printf("%d",b);
    for(int i=0;i<1000;i++)
    {
        printf("%c",name[i]);
    }
    for(int j=0;j<1000;j++)
    {
        printf("%c",dsig[j]);
    }
}
int main()
{
    struct employee 
    {
        char na[1000];
        int en;
        int bs;
        char ds[1000];

    }
    struct employee em;
    em.na=name;
    em.ds=dsig;
    em.bs=b;
    em.en=eno;

}