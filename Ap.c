#include <stdio.h>

int main()
{
    int n,a,d,ap;
    scanf("%d%d%d",&a,&d,&n);
    ap=(n/2)*(2*a + (n- 1)*d);
    printf("%d",ap);
    return 0;
}
