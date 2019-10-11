#include <stdio.h>

int main (void)
{
	int n,i,denominator,flag;
	double sum = 0;
	
	flag = 1;
	denominator = 1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum += flag * 1.0 / denominator;
		flag = -flag;
		denominator += 3;
	}
	
	printf("sum = %.3f\n",sum);
	
	return 0;
}
