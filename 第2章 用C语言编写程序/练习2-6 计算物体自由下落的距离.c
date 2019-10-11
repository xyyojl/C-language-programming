/*计算村快的本息*/
#include <stdio.h>
#include <math.h>	/*程序中调用了数学函数，需包含头文件 math.h*/

int main (void)
{
	int money,year;		/*定义两个整型变量*/
	double rate,sum;	/*定义两个双精度浮点型变量*/
	
	printf("Enter money:");		/*提示输入 money*/
	scanf("%d",&money);			/*调用 scanf() 函数输入 money*/
	printf("Enter year:");		/*提示输入 year*/
	scanf("%d",&year);			/*调用 scanf() 函数输入 year*/
	printf("Enter rate:");		/*提示输入 rate*/
	scanf("%lf",&rate);			/*调用 scanf() 函数输入 rate,%lf 中的 l 是字母*/
	sum = money * pow(1+rate,year);		/*调用幂函数 pow() 计算 */
	printf("sum = %.2f\n",sum);
	
	return 0;
}
