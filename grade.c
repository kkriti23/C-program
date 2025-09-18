#include <stdio.h>
int main()
{
	int marks;
	printf("Enter marks:");
	scanf("%d",&marks);
	
	if(marks>=90 && marks<=100){
		printf("A");
	}else if(marks>=75 && marks<=89){
		printf("B");
	}else if(marks>=60 && marks<=74){
		printf("C");
	}else if(marks>=45 && marks<=59){
		printf("D");
	}else if(marks>=35 && marks<=44){
		printf("E");
	}else{
		printf("F");
	}
}
