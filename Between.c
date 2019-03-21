#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,k,n,a,p,flag=1;
    scanf("%d",&p);
    scanf("%d%d",&a,&n);
    for(i=a;i<n;i++){
        if(i<p){
            flag=0;
        }
    }
    if(flag==0){
        printf("yes");
    }
    else{
        printf("no");
    }
return 0;
}
