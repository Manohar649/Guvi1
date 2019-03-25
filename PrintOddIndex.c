#include<stdio.h> 
#include<string.h>
int main() 
{ 
    int a,len,i;
    char r[100];
    scanf("%d",&a);
    sprintf(r,"%i",a); 
    len=strlen(r);
    for(i=0;i<len;i++)
    if(i%2!=0)printf("%c ",r[i]);
return 0;
}
