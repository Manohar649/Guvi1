#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,k,len,flag=0;
    char a[100];
    scanf("%s",a);
    len=strlen(a);
    for(i=0;i<len;i++){
        for(j=i+1;j<len;j++){
            if(a[j]==a[i]){printf("no");flag=1;break;}
        }
    if(flag==1){break;}
    }if(flag==0){printf("yes");}
    return 0;
}
