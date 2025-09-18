#include <stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the coefficients(a,b,c):");
	scanf("%d %d %d",&a,&b,&c);
	d= (b*b)-(4*a*c);
	
	if(d<0){
		printf("Roots are imaginary");
	}else if(d==0){
		printf("Roots are real and equal");
	}else{
		printf("Roots are real");
	}
}
