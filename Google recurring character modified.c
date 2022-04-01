#include <stdio.h>
#include <string.h>
int main() {
    char st[1000];
    int c=0,count=0;
    scanf("%s",st);
    for(int i=1;i<strlen(st);i++)
    {
        if(st[i]==st[i-1])
        {
            printf("%c",st[i]);
            break;
        }
    }
    
    
    return 0;
}