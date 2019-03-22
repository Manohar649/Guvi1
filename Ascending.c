#include <stdio.h>

int main()
{
    int n,i,j,k,a[100],h[100],temp;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        h[i]=a[i];
        }
        for(i=0;i<=n;i++){
            for(j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                }
            }
        }
        for(i=0;i<n;i++){
            if(a[i]!=h[i]){
                printf("%d",i);
                break;
            }
        }
    return 0;
}
