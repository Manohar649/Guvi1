#include <stdio.h>

int main()
{
   int a[100],d,i,j,k,n,small,temp;
   scanf("%d",&n);
   for(i=0;i<n;i++){
   scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
        printf("%d %d\n",a[i],i);
       
return 0;
}
