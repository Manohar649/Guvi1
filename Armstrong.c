
#include <stdio.h>
int main(void){
int a,i,b=1,j,k,c,l=0,count=0;
scanf("%d",&a);

c=a;
while(c>0){
    c/=10;
    count++;
}
c=a;
while(a>0){
k=a%10;
b=1;
for(i=0;i<count;i++){
   b*=k;
}
l+=b;
a/=10;
}
if(c==l){
    printf("yes");
}
else{
    printf("no");
}
	return 0;
}
