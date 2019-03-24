#include <stdio.h>

int main(void){
    int i,n,j=0,count=0;
 scanf("%d",&n);
 while(n>0){
     j+=n%10;
     n/=10;
 }
printf("%d",j);
 return 0;
}
