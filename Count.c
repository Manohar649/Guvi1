#include<stdio.h>
int main(){
int a,i=0;
scanf("%d",&a);
while(a>0){
a/=10;
i++;
}
printf("%d",i);
return 0;
}
