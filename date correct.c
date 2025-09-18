#include <stdio.h>
int main()
{
	int dd,mm,yyyy;
	printf("Enter date(dd mm yyyy)");
	scanf("%d %d %d",&dd,&mm,&yyyy);
	
	if(yyyy<1000){
		printf("Invalid year");
	}
	
	if(mm<1 || mm>12){
		printf("Invalid month");
	}
    
	int days;
	
	switch(mm){
		case 1: case 3: case 5: case 7: case 8 : case 10: case 12:
			days = 31;
		    break;
	    case 4: case 6: case 9: case 11:
		    days = 30;
		    break;
		case 2:
			if((yyyy%400==0) || (yyyy%4==0) && (yyyy%100 != 0)){
				days=29;
			}else{
				days=28;
			}
			break;
		default :
			printf("invalid date");
    }
    
	printf("%d %d %d", dd,mm,yyyy);
}
