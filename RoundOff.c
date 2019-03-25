#include<stdio.h>
int main(void){
    float j,l;
    int i;
    scanf("%f",&j);
    i=(int)(j < 0 ? (j - 0.5):(j + 0.5));
    printf("%d",i);
return 0;
}
