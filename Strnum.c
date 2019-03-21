#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
   char a[100];
   int i,len,flag=1;
   scanf("%s",a);
   len=strlen(a);
   for(i=0;i<len;i++){
       flag=1;
       if(a[i]>=45&&a[i]<=65){
           flag=0;
       }
       else{
           break;
       }
   }
   if(flag==0){
       printf("yes");
   }else{
       printf("no");
   }
    return 0;
}
