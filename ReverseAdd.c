#include <stdio.h>
#include <math.h>
int main(void)
{
   long int i,n,j=0,l;
    scanf("%ld",&n);
    while(n>0){
       l=n%10;
       j+=(l*l);
       n/=10;
    }
    printf("%ld",j);
}
