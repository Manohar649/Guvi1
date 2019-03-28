#include <stdio.h>
#include <string.h>
int main(void)
{
    int i,j=0,k=0,n,len,len1,a1,a2;
    char a[100],b[100];
    scanf("%s",a);
    len=strlen(a);
    for(i=0;i<len;i++){n=i;
    if(i%2==0){k=n+1;b[k]=a[i];}
    else{j=n-1;b[j]=a[i];}
    }
    printf("%s",b);
    return 0;
}
