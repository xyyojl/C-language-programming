#include <stdio.h>

int main (void)
{
	int n,i,denominator;
	double sum = 0;
	
	denominator = 1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum += 1.0 / denominator;
		denominator += 2;
	}
	
	printf("sum = %.6f\n",sum);
	
	return 0;
}
