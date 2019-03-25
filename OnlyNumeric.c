#include<stdio.h> 
#include<string.h>
int main() 
{ int len,i;
    char r[100];
    scanf("%s",r);
    len=strlen(r);
    for(i=0;i<len;i++)
    if(r[i]>=48&&r[i]<=57)printf("%c",r[i]);
return 0;
}
