#include <stdio.h>
int main(void){
   int a,i,pro=1,l;
 scanf("%d",&a);
 while(a>0){pro*=a;a-=1;}
 printf("%d",pro);
 return 0;
}
