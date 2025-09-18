#include <stdio.h>
int main()
{
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	
	if(age>=18){
		printf("Person is eligible to vote");
	}else{
		printf("Person is NOT eligible to vote");
	}
}
