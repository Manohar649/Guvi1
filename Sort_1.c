#include<stdio.h> 
#include<string.h>
int main() 
{ int len,i,j,temp;
    char r[100],n[100];
    scanf("%s",r);
    len=strlen(r);
    for(i=0;i<len;i++){
    for(j=i+1;j<len;j++){
    if(r[i]>r[j]){temp=r[j];r[j]=r[i];r[i]=temp;}
    }
    }
    printf("%s",r);
return 0;
}
