#include <stdio.h>
int main(void)
{
  int i,n=0,j,s=0;
  char a[100],b;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++){
        for(j=i+1;a[j]!='\0';j++){
            if(a[i]==a[j])n++;
        }
        if(n>s){s=n;b=a[i];}
    }
    printf("%c",b);
}
