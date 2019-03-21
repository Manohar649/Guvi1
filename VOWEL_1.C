#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int i,j=0,k,len,flag=1;
    scanf("%s",a);
    len=strlen(a);
    //printf("%d",len);
        for(i=0;i<len;i++){
            if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
                flag=0;
                break;
            }
        }
        if(flag==0){
            printf("yes");
        }else{
            printf("no");
        }
return 0;
}
