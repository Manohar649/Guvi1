#include <stdio.h>
int main(void) {	
int n1,n2,i;
char c;
scanf("%d %c %d",&n1,&c,&n2);
if(c=='/') printf("%d\n",(n1/n2));
else printf("%d\n",(n1%n2));
}
