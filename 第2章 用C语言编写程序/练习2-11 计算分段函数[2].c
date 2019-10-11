#include <stdio.h>
#include <math.h>

int main (void)
{
	double x,result;
	int t;
	t = scanf("%lf",&x);
	if(x >= 0){
		result = pow(x,0.5);
	}else{
		result = pow(x+1,2) + 2 * x + 1/x;
	}
	if(t == 1){
        printf("f(%.2f) = %.2f\n",x,result);
    }
	return 0;
}
