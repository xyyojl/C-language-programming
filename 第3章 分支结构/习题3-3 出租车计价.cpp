#include<stdio.h>

int main(void)
{
	double mileage,fare;
	int minute,n;
	
	scanf("%lf %d",&mileage,&minute);
	if(mileage <= 3){
		fare = 10;
	}else if(mileage > 3 && mileage <= 10){
		fare = 10 + (mileage -3) * 2;
	}else if(mileage > 10){
		fare = 24 + (mileage -10) * 3;
	}
	if(minute >= 5){
		n = minute / 5;
		fare += n * 2; 
	} 
	printf("%.0f",fare);
    return 0;
}
