#include <stdio.h>

int main(){
	double speed,max,x;
	
	scanf("%lf %lf",&speed,&max);
	x = (speed - max) / max * 100;
	if(x < 10){
		printf("OK\n");
	}else if(x >= 10 && x < 50){
		printf("Exceed %.0f%%. Ticket 200\n", x);
	}else if(x >= 50){
		printf("Exceed %.0f%%. License Revoked\n", x);
	}

	return 0;	
} 
