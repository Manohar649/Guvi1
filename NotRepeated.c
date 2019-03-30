#include <stdio.h>
int main(void)
{
  int i,n=0,j,s,a[100];
  scanf("%d",&s);
  for(i=0;i<s;i++)scanf("%d",&a[i]);
    for(i=0;i<s;i++){
        n=0;
        for(j=0;j<s;j++){
            if(a[i]==a[j]&& i!=j){n++;}
        }
        if(n==0){printf("%d",a[i]);}
    }
}
