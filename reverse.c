#include <stdio.h>

int main()
{
    int a,i=0,n,j,k=0,c;
    scanf("%d",&a);
    n=a;
    while(n>0){
        n/=10;
        k++;
    }
    while(a>0){
        c=a%10;
        i=i*10+c;
        a/=10;
    }
printf("%d",i);
    return 0;
}
