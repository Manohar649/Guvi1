

#include <stdio.h>


int main()
{
int a,b=0,c,i;
scanf("%d",&a);
c=a;
while(c>0){

    i=c%10;
    c/=10;
    b=b*10+i;
}
//printf("%d",b);
if(a==b){
    printf("yes");
}
else{
    printf("no");
}
    return 0;
}
