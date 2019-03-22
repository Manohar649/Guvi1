#include <stdio.h>

int main()
{
    int n,i,temp=1;
    scanf("%d",&n);
    while(n>0){
    temp*=n%10;
    n/=10;
    }
    printf("%d",temp);
    return 0;
}
