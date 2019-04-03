#include <stdio.h>
int main()
    {
    int a[100],n,i,j,m,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                    if(a[i]>a[j]){
                    m=a[j];
                    a[j]=a[i];
                    a[i]=m;
                }
            }
        if(a[i]==0){count++;}
        }
        if(count!=n){
        for(i=n-1;i>=0;i--){
        printf("%d",a[i]);}
        }
        else printf("0");
    }
