#include <stdio.h>
int main(void)
{
    int len,i,a,b;
    scanf("%d %d",&a,&b);
    if(a>b)printf("%d",(a-b));
    else printf("%d",(b-a));
    return 0;
}
