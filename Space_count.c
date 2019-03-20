#include <stdio.h>
#include <string.h>

int main()
{
   char a[100];
   int i,j,n,count=0;
   scanf("%[^\n]s",a);
   n=strlen(a);
   for(i=0;i<n;i++){
   if(a[i]==' '){
   count++;
   }
   }
   printf("%d",count);
return 0;
}
