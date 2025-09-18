#include <stdio.h>
int main()
{
	int num;
	printf("Enter a Number:");
	scanf("%d",&num);
	
	if(num%2==0){
		printf("Number is EVEN");
	}else{
		printf("Number id ODD");
	}
}
