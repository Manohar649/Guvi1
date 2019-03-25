#include <stdio.h>
int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    while(a!=b){
        if(a>b)a-=b;
        else b-=a;
    }
    printf("%d",a);
    return 0;
}
