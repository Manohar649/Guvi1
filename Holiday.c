#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
    int i=0,j,j1;
    char a[7],sun[]="sunday",sat[]="saturday",h[7];
    scanf("%s",a);
    while(a[i]){h[i]=tolower(a[i]);i++;}
    j=strcmp(h,sun);
    j1=strcmp(h,sat);
    if(j==0||j1==0)printf("yes");
    else printf("no");
    
}
