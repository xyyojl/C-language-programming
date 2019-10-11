#include <stdio.h>

int main (void)
{
	int fahr,celsius;
	
	scanf("%d",&fahr);
	celsius = 5 * (fahr - 32) / 9;	/*温度转换计算*/
	printf("Celsius = %d\n",celsius);	/*调用 printf() 函数输出结果*/
	return 0;
}
