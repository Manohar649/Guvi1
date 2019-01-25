#include<stdio.h>
int main()
{
    int a,i,o=1;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        o*=i;
    }
    printf("%d",o);
return 0;    
}
