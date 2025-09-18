#include <stdio.h>
int main()
{
	int num;
	char ch;
	float f;
	
	printf("Enter an integer:");
	scanf("%d",&num);
	printf("Integer : %d\n",num);
	
	printf("Enter a character:");
	scanf(" %c",&ch);
	printf("character : %c\n",ch);
	
	printf("Enter a float:");
	scanf("%f",&f);
	printf("float : %f\n",f);
	
	return 0 ;
}
