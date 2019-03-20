
#include <stdio.h>
#include <string.h>

int main()
{
   char a[100];
   int i,j,n,total=0,count=1;
   scanf("%[^\n]s",a);
   n=strlen(a);
   for(i=0;i<n;i++){
   if(a[i]!=' '){
   total+=count;
   count++;
   }
   else{
       count=0;
   }
   }
   printf("%d",total);
return 0;
}
