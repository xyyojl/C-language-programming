/* �������-�����¶�ת���������¶�ȡֵ[lower,upper]��ÿ������ 1 ���϶� */ 
#include <stdio.h>
int main(void){
	/*fahr ��ʾ���϶ȣ�celsiusΪ���϶ȣ�lower Ϊ�����¶����ޣ�upper Ϊ�����¶�����*/
	int fahr,lower,upper;
	double celsius;
	
	printf("Enter lower:");		/*������ʾ*/
	scanf("%d",&lower);			/*���� scanf() �������� lower*/
	printf("Enter upoer:");		/*������ʾ*/
	scanf("%d",&upper);			/*���� scanf() �������� upper*/
	
	/*�ж��������ݵĺϷ��ԣ��� lower �Ƿ�С�ڵ��� upper*/ 
	if(lower <= upper){		/*lower С�ڵ��� upper ʱ��ת���¶Ȳ����*/
		printf("fahr celsius\n");	/*����¶�ת����ı�ͷ*/ 
		/*�¶��ظ�ת���������¶ȴ� lower ��ʼ����upper ������ÿ������ 1 �����¶�*/ 
		for(fahr = lower;fahr <= upper;fahr++){
			celsius = (5.0 / 9.0) * (fahr - 32); 	/*�¶�ת������*/ 
			printf("%4d%6.1f\n",fahr,celsius);		/*���*/ 
		}
	}else{	/*lower ���� upper ʱ*/ 
		printf("Invalid value! \n");	/* ���������ʾ*/ 
	}
	return 0;
} 
