#include <stdio.h>
int main(void){
    int a,flag=1,i;
    scanf("%d",&a);
for(i=2;i<a/2;i++){
    if(a%i==0){
        flag=0;
    }
}
if(flag==1){
    printf("yes");
}
else{
    printf("no");
}
}
