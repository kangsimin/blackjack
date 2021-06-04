#include<stdio.h>
#include<math.h>
main(){
char n, i, d,p;
scanf("%c %c %c", &n, &i, &d);
for(p=1 ; p<d; p++)
{
	n=n*i;
}
printf("%d",n);
}
