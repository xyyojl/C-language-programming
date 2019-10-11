/*调用幂函数 pow() 生成乘方表*/ 
#include <stdio.h>
#include <math.h>

int main(void){
	int i,n;
	double power;
	
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		power = pow(2,i);	/* 调用幂函数 pow(2,i) 计算2的i次方 */
		printf("pow(2,%d) = %.0f\n",i,power);
	} 

	return 0;
}
