#include <stdio.h>

int main (void)
{
	double x,y;
	int t;
	t = scanf("%lf",&x);
	if(x != 0){
		y = 1.0/x;
	}else{
		y = 0;	
	}
	if(t == 1){
        printf("f(%.1f) = %.1f\n",x,y);
    }
	return 0;
}
