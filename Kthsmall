#include <stdio.h>

int main(){
    int i,j,k,n,temp=1,max,a[100],pos;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    k=(n+1)-k;
    while(temp<=k){
        max=a[0];
    for(i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
            pos=i;
        }
    }
    if(temp==k){
        printf("%d",max);
    }
    else{
        a[pos]=0;
    }
    temp++;
    
}
    return 0;

}
