#include <stdio.h>
int main()
{
    int a,b,lcm,l,k;
    scanf("%d %d",&a,&b);
    l=a;k=b;
    while(a!=b){
        if(a>b)a-=b;
        else b-=a;
    }
   lcm=(l*k)/a;
   printf("%d",lcm);
    return 0;
}
