#include <stdio.h>
int main(void){
    int n,i,j,flag=0,k=0,l=0;
    char a[100];
 scanf("%[^\n]s",a);
 j=strlen(a);
 for(i=0;i<j;i++)if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122))k++;
 else if(a[i]>=48&&a[i]<=57)l++;
 else flag++;
 if(flag==0|| l!=0 && k!=0)printf("yes");
 else printf("no");
 return 0;
}
