
#include <stdio.h>

int main(void){
    int i,n,j=0,a[10];
 scanf("%d",&n);
 while(n>0){
     a[j]=n%10;
     n/=10;
     j++;
 }
 for(i=j-1;i>=0;i--)printf("%d ",a[i]);
 return 0;
}
