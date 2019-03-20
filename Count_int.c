#include <stdio.h>
#include <string.h>
#include<ctype.h>
#include <stdlib.h>


int main()
{
   char a[100];
   int i,j,n,count=0;
   scanf("%[^\n]s",a);
   n=strlen(a);
   for(i=0;i<n;i++){
   if(isdigit(a[i])){
   count++;
   }
   }
   printf("%d",count);
return 0;
}
