/*���򵥵�����������ʽ*/
#include <stdio.h>

int main(void){
	double value1,value2;
	char op;	/*�ַ��ͱ���*/ 
	
	printf("Type in an expression:");
	scanf("%lf%c%lf",&value1,&op,&value2);
	if(op == '+'){							/*�ж�������Ƿ�Ϊ'+'*/
		printf("=%.2f\n",value1+value2);	/*�Բ��������ӷ�����*/
	} else if(op == '-'){					/*�����ж�������Ƿ�Ϊ'-'*/
		printf("=%.2f\n",value1-value2);
	} else if(op == '*'){					/*�����ж�������Ƿ�Ϊ'*'*/
		printf("=%.2f\n",value1*value2);
	} else if(op == '/'){					/*�����ж�������Ƿ�Ϊ'/'*/
		if(value2 != 0){					/*Ƕ�׵�if ���жϳ����Ƿ�Ϊ0*/ 
			printf("=%.2f\n",value1/value2);
		}else{
			printf("Divisor can not be 0!\n");
		}
		
	} else{
		printf("Unknown operator \n");
	}
	return 0;
}
