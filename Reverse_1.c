#include <stdio.h>

int main()
{

   int i,a,b,c,d=0;
   scanf("%d",&a);
b=a;
   while(b!=0){
       c=b%10;
       d=d*10+c;
       b/=10;
   }
printf("%d",d);
return 0;
}
