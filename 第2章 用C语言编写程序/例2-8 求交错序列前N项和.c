/* 计算 1-1/3+1/5-1/7+... 共 n 项和*/ 
#include <stdio.h>

int main(void){
	int denominator,flag,i,n;
	double item,sum;
	
	printf("Enter n:");
	scanf("%d",&n);
	/*执行循环前，给变量赋初值*/ 
	flag = 1;	/*flag 表示第 i 项的符号，初始为正*/ 
	denominator = 1;	/*denominator表示第 i 项的分母，初值为1*/ 
	sum = 0;	/*置累计和sum的初值为0*/ 
	/*用 for 语句实现循环，循环执行 n 次*/ 
	for(i=1;i<=n;i++){
		item = flag * 1.0 / denominator;	/*计算第 i 项的值*/ 
		sum = sum + item;					/*累加第 i 项的值*/ 
		flag = -flag;						/*改变符号，为下一次循环做准备*/ 
		denominator = denominator + 2;		/*分母递增2，为下一次循环做准备*/ 
	} 
	printf("sum=%f\n",sum);
	return 0;
}
