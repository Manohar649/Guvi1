
#include <stdio.h>

int main()
{
   int a,k,hour=0;
   scanf("%d",&k);
   if(k<60){
       printf("%d %d",hour,k);
   }
   else if(k>60){
      while(k>60){
      hour++;
      k-=60;
      }
       printf("%d %d",hour,k);
   }
return 0;
}
