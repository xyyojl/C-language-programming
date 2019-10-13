/*计算多分段函数*/ 
#include <stdio.h>

int main(void){
	double x,y;		/*定义两个双精度浮点型变量*/ 
	
	printf("Enter x:");
	scanf("%lf",&x);	/*输入 double 型数据用 %lf*/ 
	if(x < 0){			/*满足 x < 0*/ 
		y = 0;
	}else if(x <= 15){	/*不满足 x < 0，但满足 x <= 15，即满足 0<=x<=15*/ 
		y = 4 * x / 3;
	}else{				/*不满足 x < 0，也不满足 x <= 15，即满足 x > 15*/ 
		y = 2.5 * x - 10.5;
	}
	printf("f(%.2f) = %.2f\n",x,y);
	return 0;
}
