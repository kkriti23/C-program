#include <stdio.h>
int main()
{
	int dd,mm,yyyy;
	
	printf("Enter date (dd,mm,yyyy):");
	scanf("%d %d %d",&dd,&mm,&yyyy);
	
	if(yyyy<999 && yyyy.){
		printf("Invalid Year\n");
	}
	
	if(mm<0 || mm>12){
		printf("Invalid Month\n");
	}
	
	int isleap = 0;
	if(yyyy%4 == 0){
		isleap=1;
	}
	
	int daysinmonth;
	
	if(mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==9 || mm==11){
		daysinmonth=31;
	}else if(mm==4 || mm==6 || mm==10 || mm==12){
		daysinmonth=30;
	}else if(mm==2){
		if(isleap){
			daysinmonth=29;
		}else{
			daysinmonth=28;
		}
    }
    
    if(dd<1 || dd>daysinmonth){
    	printf("Invalid Date\n");
	}else{
		printf("Valid date");
    }
}
