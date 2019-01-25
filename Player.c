#include <stdio.h>

int main()
{
    char a[100];
    int i;
    printf("enter the character in  array:");
    for(i=0;i<=6;i++){
    scanf("%c",&a[i]);
}
for(i=6;i>=0;i--){
    printf("%c",a[i]);
}
    return 0;
