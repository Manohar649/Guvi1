#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int i,n;
    printf("enter the character in  array:");
    scanf("%s",a);
    n=strlen(a);
for(i=n;i>=0;i--){
    printf("%c",a[i]);
}
    return 0;
}
