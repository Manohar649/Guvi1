#include<stdio.h>
#include<string.h>
int main(void){
    int n=0,len;
    char a[100];
    scanf("%s",a);
    len=strlen(a);
    if(len%2!=0){
        n=len/2;
        a[n]=42;
    }else{
        n=len/2;
        a[n]=42;
        a[n-1]=42;
    }
    printf("%s",a);
return 0;
}
