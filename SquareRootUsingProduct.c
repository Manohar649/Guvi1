#include<stdio.h>
int main(void){
    int n,n1,total,max,i,flag=0;
    scanf("%d%d",&n,&n1);
   total=n*n1;
   max=n1;
   if(n>n1)max=n;
   for(i=1;i<max;i++){
    if(total==i*i){
    printf("yes");
    flag=1;
    break;
    }
   }
    if(flag==0)printf("no");
return 0;
}
