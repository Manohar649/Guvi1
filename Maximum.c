#include <stdio.h>
int main(void)
{
  int i,n,j,s,a;
  scanf("%d%d",&s,&n);
  if(s>n)a=s;
  else a=n;
  while(a)if(a%s==0 && a%n==0){printf("%d",a);break;}
  a++;
}
