#include<stdio.h>
#include<string.h>
int main(void){
 int a[20],len,i=0,j,k;
 char r[6];
 scanf("%s",r);
 len=strlen(r);
 for(i=0;i<len;i++){
  if(r[i]=='I')a[i]=1;
  else if(r[i]=='V')a[i]=5;
  else if(r[i]=='X')a[i]=10;
  else if(r[i]=='L')a[i]=50;
  else if(r[i]=='C')a[i]=100;
  else if(r[i]=='D')a[i]=500;
  else if(r[i]=='M')a[i]=1000;
 }
k=a[len-1];
for(i=len-1;i>0;i--){
  if(a[i]>a[i-1]) k-=a[i-1];
  else if(a[i]==a[i-1] || a[i]<a[i-1]) k+=a[i-1];
} 
printf("%d",k);
return 0;
}
