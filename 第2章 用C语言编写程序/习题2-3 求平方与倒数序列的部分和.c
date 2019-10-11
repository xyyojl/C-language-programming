#include <stdio.h>
#include <math.h>

int main (void)
{
	int n,m,i;
	double sum,item;
	
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++){
		item = pow(i,2) + 1.0/i;
		sum += item; 
	}
	
	printf("sum = %.6f\n",sum);
	
	return 0;
}

