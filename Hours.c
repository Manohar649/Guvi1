
#include <stdio.h>

int main()
{
   int a,d,n1,k1,k,n,small,temp;
   scanf("%d%d",&n,&k);
    scanf("%d%d",&n1,&k1);
   if(n>n1){
       a=n-n1;
       d=k-k1;
       if(k>k1)
        printf("%d %d",a,-d);
   }
   else{
       a=n1-n;
       d=k1-k;
       if(k<k1)
        printf("%d %d",a,d);
   }
   //printf("%d %d",a,-d);
       
return 0;
}
