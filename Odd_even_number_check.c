#include <stdio.h>
int check(int q);
int main(void)
{
    int a,j;
    scanf("%d",&a);
    check(a);
    //check(a1);
    return 0;
}
int check(int q){
    int b;
    if(q%2==0){
        b=q/2;
        printf("%d\n",b);
    }else{
        printf("%d ",q);
    }
return 0;
}
