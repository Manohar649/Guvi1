#include<stdio.h>
#include<string.h>
int main()
{
   char a[100],len,i,j;
   scanf("%[^\n]s",a);
   len=strlen(a);
for(i=0;i<len;i++){
   j=i+1;
   if((a[i]==' ') && (a[j]>='a' && a[j]<='z')){
   a[j]-=32;
   }
   if((i==0) && (a[i]>90 && a[i]<122)){
       a[i]-=32;
   }
}
    printf("%s",a);
    return 0;
}
