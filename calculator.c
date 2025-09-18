#include <stdio.h>
int main()
{
	char operator;
	double num1, num2, result;
	
	printf("Enter the operator(+,-,*,/):");
	scanf("%c",&operator);
	
	printf("Enter number:");
	scanf("%lf",&num1);
	printf("Enter another number:");
	scanf("%lf",&num2);
	
	switch(operator)
	{
		case'+':
			result=num1+num2;
			printf("%.2lf %c %.2lf = %.2lf",num1, operator, num2, result);
			break;
		case'-':
		    result=num1-num2;
			printf("%.2lf %c %.2lf = %.2lf",num1, operator, num2, result);
			break;
		case'*':
		    result=num1*num2;
			printf("%.2lf %c %.2lf = %.2lf",num1, operator, num2, result);
			break;
	    case'/':
	    	if(num2 != 0){
	    		result=num1/num2;
	    		printf("%.2lf %c %.2lf = %.2lf",num1, operator, num2, result);
			}else{
				printf("Error!");
			}
		    break;
		default:
			printf("Error! Invalid Oprator");
	}
	return 0;
}
