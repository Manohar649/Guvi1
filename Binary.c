#include<stdio.h>
int main(void){
    long int num;
    int i,j;
    scanf("%d",&num);
    while(num>0){
        j=num%10;
        if(j!=0&&j!=1){
            printf("no");break;
        }
        num/=10;
    }if(num==0)printf("yes");
return 0;
}
