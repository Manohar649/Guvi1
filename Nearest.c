#include <stdio.h>
int main(void){
 int i,n,a,b;
 scanf("%d",&n);
 a=(n/10)*10;
 b=a+10;
 if((n-a)>(b-n))printf("%d",a);
 else printf("%d",b);
}
