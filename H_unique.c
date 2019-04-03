#include <stdio.h>
int main()
    {
    int a[100],n,i,j,m,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                    if(a[i]==a[j]){
                    k=1;
                    break;
                    }
            }
        if(k==1){printf("%d",a[i]);break;}
        else k=2;
        }
       if(k==2)printf("unique");
    }
