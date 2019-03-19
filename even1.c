#include <stdio.h>
int main(void){
    int a,i,b;
    scanf("%d%d",&a,&b);
    a+=1;
    for(i=a;i<b;i++){
    if(i%2==0){
        printf("%d ",i);
    }
    }
}
