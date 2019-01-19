#include<stdio.h>
int main(){
char a;
scanf("%c",&a);
if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u' ){
printf("Vowles");
}
else if(a>=65 && a<=90){
printf("Consonant");
}
else{
printf("invalid');
}
return 0;
}
