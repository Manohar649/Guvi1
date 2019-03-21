#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],h[100];
    int i,j=-1,k,len,flag=1,count=0;
    scanf("%s",a);
    len=strlen(a);
    //printf("%d",len);
        for(i=0;i<len;i++){
            ++j;
           h[j]=a[i];
        }
        for(i=0,j=len-1;i<len,j>=0;i++,j--){
        if(h[j]==a[i]){
           count++;
        }
        }
        if(count==len){
            printf("yes");
        }
        else{
            printf("no");
        }
return 0;
}
