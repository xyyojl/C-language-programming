/*调用幂函数 pow() 生成乘方表*/ 
#include <stdio.h>
double fact (int n);	/*自定义函数的声明（简称函数声明）*/

int main(void){
	int i,n;
	double result;
	
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		result = fact(i);	/*调用自定义函数 fact(i) 计算 i!*/ 
		printf("%d! = %.0f\n",i,result);
	} 
	return 0;
} 
/*定义求 n! 的函数*/
double fact (int n){	/*函数首部*/ 
	int i;
	double product;		/*变量 product 用于存放结果（阶乘的值）*/ 
	
	/*计算 n!*/ 
	product = 1;	/*置阶乘product 的初值为1*/
	for(i=1;i<=n;i++){		/*循环 n 次，计算 n!*/ 
		product = product * i;
	}
	return product;		/*将结果回送主函数*/
}
