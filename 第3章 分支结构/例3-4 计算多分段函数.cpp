/*�����ֶκ���*/ 
#include <stdio.h>

int main(void){
	double x,y;		/*��������˫���ȸ����ͱ���*/ 
	
	printf("Enter x:");
	scanf("%lf",&x);	/*���� double �������� %lf*/ 
	if(x < 0){			/*���� x < 0*/ 
		y = 0;
	}else if(x <= 15){	/*������ x < 0�������� x <= 15�������� 0<=x<=15*/ 
		y = 4 * x / 3;
	}else{				/*������ x < 0��Ҳ������ x <= 15�������� x > 15*/ 
		y = 2.5 * x - 10.5;
	}
	printf("f(%.2f) = %.2f\n",x,y);
	return 0;
}
