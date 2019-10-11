#include <stdio.h>
#include <math.h>

int main (void)
{
	int i,n;
	double item,sum;

	scanf("%d",&n);
	for(i=1;i<=n;i++){
		item = sqrt(i);
		sum += item;
	}
	printf("sum = %.2f\n",sum);
	
	return 0;
}

