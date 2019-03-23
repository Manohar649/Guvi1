#include <stdio.h>
#include <math.h>
int main(void){
    int i,n;
 scanf("%d",&n);
 if( ceil(log2(n)) == floor(log2(n))) printf("yes");
 else printf("no");
    return 0;
}
