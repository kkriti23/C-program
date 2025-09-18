#include <stdio.h>
int main()
{
	int marks;
	printf("Enter marks:");
	scanf("%d",&marks);
	
	marks>75?printf("First Division"):(marks<60?printf("Third division"):printf("Second division"));
}
