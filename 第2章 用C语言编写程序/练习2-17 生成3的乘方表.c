#include <stdio.h>
#include <math.h>

int main (void)
{
	int n,i;
	double power;
	
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		power = pow(3,i);
		printf("pow(3,%d) = %.0f\n",i,power);
	}
	
	return 0;
}
