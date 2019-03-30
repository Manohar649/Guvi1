#include <stdio.h>
#include <string.h>
int main(void)
{
  int i,n,j,s,a,len,count=0,l=0,len1;
  char arr[]="kabali",b[100];
  len=strlen(arr);
  scanf("%d",&n);
while(n){scanf("%s",b);
len1=strlen(b);{count=0;if(len1==len){
    for(i=0;i<len;i++){
        for(j=0;j<len;j++){
            if(b[i]==arr[j]){
                count++;break;
            }
        }
    }
}
    if(count==len){l++;}
}
n--;
}printf("%d",l);
}
