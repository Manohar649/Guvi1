#include <stdio.h>

int main()
{
   int i,j,n,k,temp;
   
   scanf("%d %d",&i,&j);
   i=i ^ j;
   j=i ^ j;
   i=i ^ j;
   printf("%d %d",i,j);
return 0;
}
