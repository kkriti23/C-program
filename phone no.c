#include <stdio.h>
int main()
{
	long long int num;
	printf("Enter the phone number:");
	if(scanf("%lld",&num)==1){
		if(num>999999999 || num<10000000000){
			printf("Valid Phone Number");
		}	
	}else{
	    printf("Inalid Phone Number");
	}
	// return error
}
