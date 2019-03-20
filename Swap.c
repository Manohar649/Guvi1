
#include <stdio.h>

int main()
{
   int i,j,n,k,temp;
   
   scanf("%d %d",&i,&j);
   temp=i;
   i=j;
   j=temp;
   printf("%d %d",i,j);
return 0;
}
