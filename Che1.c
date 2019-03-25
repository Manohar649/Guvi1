#include <stdio.h>
#include <string.h>
int main()
{
    int len,i;
    char a[100];
    scanf("%s",a);
       len=strlen(a);
    for(i=0;i<len;i+=2)printf("%c",a[i]);
    printf(" ");
    for(i=1;i<len;i+=2)printf("%c",a[i]);
    return 0;
}
