#include <stdio.h>
#include <string.h>
int main() {
    char st[1000];
    int c=0,count=0;
    scanf("%s",st);
    for(int i=0;i<strlen(st);i++)
    {
        for(int j=0;j<strlen(st);j++)
        {
            if(st[i]==st[j])
            {
                count=count+1;
            }
            if(count==2)
            {
                printf("%c",st[j]);
                c=1;
                break;
            }
        }
        if(c==1)
        {
            break;
        }
        count=0;
    }
    
    
    return 0;
}