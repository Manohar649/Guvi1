#include <stdio.h>
#include <math.h>
int main(void){
int a,i,b=1,j,k,j1,c,c1,l=0,count=0;
scanf("%d%d",&a,&j1);
for(j=a;j<=j1;j++){
    c=j;
    l=0;
    count=0;
    while(c>0){
    c/=10;
    count++;
}
//printf("%d",count);
c1=j;
while(c1>0){
k=c1%10;
b=pow(k,count);
l+=b;
c1/=10;
//printf("%d ",l);
}
c1=j;
if(c1==l){
    printf("%d ",l);
}
}
	return 0;
}
