#include <stdio.h>
int main()
{
	int id ;
	float  pro , eff , rel ;
	float score;
	
	printf("Employ id :");
	scanf("%f",&id);
	
	printf("Productivity :");
	scanf("%f",&pro);
	
	printf("Efficiency :");
	scanf("%f",&eff);
	
	printf("Reliability :");
	scanf("%f",&rel);
	
	score = (pro + eff + rel)/3;
	printf("Performance score : %.2f",score);
}
