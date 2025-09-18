#include <stdio.h>
int main()
{
	int year;
	printf("Enter Year:");
	scanf("%d",&year);
	
	if(year % 4 == 0){
		printf("It is a leap year");
	}else{
		printf("Not a leap year");
	}
}
