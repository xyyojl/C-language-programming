/*将华氏温度转换为摄氏温度*/
#include <stdio.h>

int main (void)
{
	/*定义两个整型变量，fahr 表示华氏度，celsius 表示摄氏度*/
	int fahr,celsius;
					/*空行，用于分隔变量定义和可执行语句*/
	fahr = 100;		/*对变量 fahr 赋值*/
	celsius = 5 * (fahr - 32) / 9;	/*温度转换计算*/
	printf("fahr = %d, celsius = %d\n",fahr,celsius);	/*调用 printf() 函数输出结果*/
	return 0;
}
