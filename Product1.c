#include <stdio.h>
int main(void)
{
  int i,n,j,s,a,l,len1;
  scanf("%d",&n);
  for(i=2;i<=n;i++){
  if(n%i==0){
      l=1;
      for(j=2;j<=i/2;j++){
          if(i%j==0){
          l=0;break;}
      }
      if(l==1)printf("%d ",i);
  }
  }
}
