#include <stdio.h>
#include <math.h>

int main (void)
{
	int denominator,flag,i,n,numerator;
	double item,sum;
	
	flag = 1;
	denominator = 1;
	numerator = 1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		item = flag * 1.0 * numerator / denominator;
		sum += item;
		flag = -flag;
		denominator += 2;
		numerator += 1;
	}
	
	printf("%.3f\n",sum);
	
	return 0;
}

