#include <stdio.h>
#include <string.h>
int main()
{
    char f[100];
    scanf("%s",f);
    int a,len,i,count=0;
    len=strlen(f);
    //printf("%d",len);
    scanf("%d",&a);
    for(i=len;i>=a;i--){
            printf("%c",f[i]);
        }
    
    return 0;
}
