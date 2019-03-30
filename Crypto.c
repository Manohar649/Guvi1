#include <stdio.h>
#include <string.h>
int main(void)
{
    int i,j;
    char a[100];
    scanf("%s",a);
    j=strlen(a);
    for(i=0;i<j;i++){
    if(a[i]>=65&&a[i]<=87||a[i]>=97&&a[i]<=119){a[i]+=3;}
    else if((a[i]==90||a[i]==122)||(a[i]==89||a[i]==121)||(a[i]==88||a[i]==120))a[i]-=23;}
    printf("%s",a);
    return 0;
}
