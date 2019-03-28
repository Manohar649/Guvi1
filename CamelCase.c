#include <stdio.h>
#include <string.h>
int main(void)
{
    int i,j=0,k=0,n,len,len1,a1,a2;
    char a[100];
    scanf("%[^\n]s",a);
    len=strlen(a);
     a[0]-=32;
    for(i=1;i<len;i++){
    if(a[i]==' '){a[i+1]-=32;}
    }
    printf("%s",a);
    return 0;
}
