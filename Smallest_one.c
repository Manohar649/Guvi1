#include <stdio.h>

int main()
{
   int a[100],d,i,j,k,n,small;
   scanf("%d",&n);
   for(i=0;i<n;i++){
   scanf("%d",&a[i]);
   }
       small=a[0];
       for(i=1;i<n;i++){
           if(small>a[i]){
               small=a[i];
           }
       }
   printf("%d",small);
return 0;
}
