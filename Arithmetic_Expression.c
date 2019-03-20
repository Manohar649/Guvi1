#include <stdio.h>

int main()
{
   int a,d,i,j,k,n;
   scanf("%d%d%d",&n,&a,&d);
   for(i=0;i<n;i++){
      printf("%d ",a);
       a+=d;
   }
return 0;
}
