#include <stdio.h>
int main(void)
{
    int i,a[100],b[100],n,temp,k,j=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    temp=n-k;
    for(i=temp;i<n;i++){b[j]=a[i];j++;}
    for(i=0;i<temp;i++){b[j]=a[i];j++;}
    for(j=0;j<n;j++)printf("%d ",b[j]);
}
