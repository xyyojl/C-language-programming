/*计算二分段函数*/
#include <stdio.h>

int main(void){
	double x,y;		/*定义两个双精度浮点型变量*/
	
	printf("Enter x(x>=0):\n");		/*输入提示*/
	/*调用 scanf() 函数输入数据，变量名x前面加&，%lf中的 l 是 long 的首字母*/
	scanf("%lf",&x);
	/*if-else 语句*/
	if(x <= 15){
		y = 4 * x / 3;
	} else{
		y = 2.5 * x - 10.5; 
	}
	printf("y = f(%f) = %.2f\n",x,y);	/*调用printf() 函数输出结果*/ 
	return 0; 
}
