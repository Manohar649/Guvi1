#include <stdio.h>
long main(void) {	
int n1,n2,i;
char c;
scanf("%ld %c %ld",&n1,&c,&n2);
if(c=='/') printf("%ld\n",(n1/n2));
else printf("%ld\n",(n1%n2));
}
