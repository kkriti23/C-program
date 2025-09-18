#include <stdio.h>
int main()
{
	char num;
	printf("Enter a number(1-7):");
	scanf("%c",&num);
	
	switch(num)
		{
			case'1':
				printf("Monday\n");
			case'2':
				printf("Tuesday\n");
			case'3':
				printf("Wednesday\n");
			case'5':
				printf("Friday\n");
			case'6':
				printf("Saturday\n");
			case'7':
				printf("Sunday\n");	
		}
	
}
