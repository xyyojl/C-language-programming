#include <stdio.h>

int main (void)
{
	double cost,e;
	
	scanf("%lf",&e);
	if(e >= 0){
		if(e <= 50){
			cost = e * 0.53;
		}else{ if(e > 50)
			cost = 50 * 0.53 + (e-50)*0.58;
		}
		printf("cost = %.2f\n",cost);
	}else{
		printf("Invalid Value!\n");
	}
	
	return 0;
}

