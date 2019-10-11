/* 输出华氏-摄氏温度转换表，华氏温度取值[lower,upper]，每次增加 1 华氏度 */ 
#include <stdio.h>
int main(void){
	/*fahr 表示华氏度，celsius为摄氏度，lower 为华氏温度下限，upper 为华氏温度上限*/
	int fahr,lower,upper;
	double celsius;
	
	printf("Enter lower:");		/*输入提示*/
	scanf("%d",&lower);			/*调用 scanf() 函数输入 lower*/
	printf("Enter upoer:");		/*输入提示*/
	scanf("%d",&upper);			/*调用 scanf() 函数输入 upper*/
	
	/*判断输入数据的合法性，即 lower 是否小于等于 upper*/ 
	if(lower <= upper){		/*lower 小于等于 upper 时，转换温度并输出*/
		printf("fahr celsius\n");	/*输出温度转换表的表头*/ 
		/*温度重复转换：华氏温度从 lower 开始，到upper 结束，每次增加 1 华氏温度*/ 
		for(fahr = lower;fahr <= upper;fahr++){
			celsius = (5.0 / 9.0) * (fahr - 32); 	/*温度转换计算*/ 
			printf("%4d%6.1f\n",fahr,celsius);		/*输出*/ 
		}
	}else{	/*lower 大于 upper 时*/ 
		printf("Invalid value! \n");	/* 输出错误提示*/ 
	}
	return 0;
} 
