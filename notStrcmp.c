#include <stdio.h>
#include <string.h>
int main(void){
    char a[100],b[100];
    int i,j;
scanf("%s%s",&a,&b);
i=strlen(a);j=strlen(b);
    if(i<j)printf("%s\n",b);
    else if(j>i)printf("%s\n",a);
    else printf("%s",a);
    return 0;
}
