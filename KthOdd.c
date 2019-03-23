#include <stdio.h>
int main(){
    int i,j,k,n,temp=1,max,a[100];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    while(temp<=k){
    for(i=0;i<n;i++){
        if(a[i]!=2){
            max=a[i];
        }
    }
    if(temp==k){
        printf("%d",max);
    }
    temp++;
    
}
    return 0;

}
