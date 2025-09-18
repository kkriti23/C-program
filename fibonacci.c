#include<stdio.h>
int main()
{
	int a=0;
	int b=1;
	int c;
	int n=10;
	printf("%d\t %d\t",a,b);
start:
	if(n>0){
		c=a+b;
		a=b;
		b=c;
		printf("%d\t",c);
		n--;
        goto start;
	}
	
}
