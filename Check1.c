#include <stdio.h>
#include <string.h>
int main(void){
 int i,n,b=0;
 char a[100],min;
 scanf("%[^\n]s",a);
 n=strlen(a);
 min=a[0];
 for(i=1;i<n;i++){
     if(a[i]!=' '){
     if(min>a[i]){
         min=a[i];
         b=i;
     }
 }
 }
     if(min=='-')printf("%c%c",min,a[b+1]);
     else printf("%c",min);
 return 0;
}
