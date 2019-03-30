#include <stdio.h>
int main(void)
{
  int i,n,j=0;
  char a[100],b[100];
    scanf("%d",&n);
    a[n]='\0';
    scanf("%s",a);
    for(i=n-1;i>=0;i--){
        if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
        {}else{b[j]=a[i];++j;}
        b[j]='\0';
    }
    printf("%s",b);
}
