/*求解简单的四则运算表达式*/
#include <stdio.h>

int main(void){
	double value1,value2;
	char op;	/*字符型变量*/ 
	
	printf("Type in an expression:");
	scanf("%lf%c%lf",&value1,&op,&value2);
	if(op == '+'){							/*判断运算符是否为'+'*/
		printf("=%.2f\n",value1+value2);	/*对操作数做加法操作*/
	} else if(op == '-'){					/*否则判断运算符是否为'-'*/
		printf("=%.2f\n",value1-value2);
	} else if(op == '*'){					/*否则判断运算符是否为'*'*/
		printf("=%.2f\n",value1*value2);
	} else if(op == '/'){					/*否则判断运算符是否为'/'*/
		if(value2 != 0){					/*嵌套的if ，判断除数是否为0*/ 
			printf("=%.2f\n",value1/value2);
		}else{
			printf("Divisor can not be 0!\n");
		}
		
	} else{
		printf("Unknown operator \n");
	}
	return 0;
}
