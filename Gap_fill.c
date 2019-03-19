#include<stdio.h>
#include<string.h>
int main()
{
   char a[100];
   int len,i,j,k;
   scanf("%[^\n]s",a);
   len=strlen(a);
for(i=0;i<len;i++){
   if((a[i]==' ')){
   for(k=i,j=k+1;j<len,k<len;j++,k++){
       a[k]=a[j];
   }
   }
}
    printf("%s",a);
    return 0;
}
