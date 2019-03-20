
#include <stdio.h>

int main()
{

   int i,a[100],n,b,c,d=0;
   scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    d+=a[i];
}
printf("%d",d);
return 0;
}
