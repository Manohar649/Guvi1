#include <stdio.h>

int main()
{
   int a[100],d,i,j,k,n,median=0;
   scanf("%d",&n);
   for(i=0;i<n;i++){
   scanf("%d",&a[i]);
   }
       for(i=0;i<n;i++){
               median+=a[i];
           }
       
   printf("%d",(median/n));
return 0;
}
