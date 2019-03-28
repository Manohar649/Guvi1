#include <stdio.h>
#include <string.h>
int main(void)
{
    int i,j,n,len,len1,a1,a2;
    char a[100],b[100];
    scanf("%s %s",a,b);
    len=strlen(a);
    len1=strlen(b);
    if(len1==len){
    for(i=0;i<len;i++){
        for(j=i+1;j<len1;j++){
            a1=a[i]-a[j];
            a2=b[i]-b[j];
            if(a1!=a2){ printf("no");n=1;break;}
        }
    }
    }
    else printf("no");
    if(n==1)printf("no");
    else printf("yes");
    return 0;
}
