/*������ֶκ���*/
#include <stdio.h>

int main(void){
	double x,y;		/*��������˫���ȸ����ͱ���*/
	
	printf("Enter x(x>=0):\n");		/*������ʾ*/
	/*���� scanf() �����������ݣ�������xǰ���&��%lf�е� l �� long ������ĸ*/
	scanf("%lf",&x);
	/*if-else ���*/
	if(x <= 15){
		y = 4 * x / 3;
	} else{
		y = 2.5 * x - 10.5; 
	}
	printf("y = f(%f) = %.2f\n",x,y);	/*����printf() ����������*/ 
	return 0; 
}
