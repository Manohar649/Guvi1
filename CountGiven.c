#include <stdio.h>
int main(void){
   int a[100],c,i,pro=0,n,j;
 scanf("%d%d",&n,&j);
 for(i=0;i<n;i++)scanf("%d",&a[i]);
 for(i=0;i<n;i++)if(a[i]==j)pro++;
if(pro!=0)printf("yes");
else printf("no");
 return 0;
}
