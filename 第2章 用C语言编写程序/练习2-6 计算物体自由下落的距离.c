/*������ı�Ϣ*/
#include <stdio.h>
#include <math.h>	/*�����е�������ѧ�����������ͷ�ļ� math.h*/

int main (void)
{
	int money,year;		/*�����������ͱ���*/
	double rate,sum;	/*��������˫���ȸ����ͱ���*/
	
	printf("Enter money:");		/*��ʾ���� money*/
	scanf("%d",&money);			/*���� scanf() �������� money*/
	printf("Enter year:");		/*��ʾ���� year*/
	scanf("%d",&year);			/*���� scanf() �������� year*/
	printf("Enter rate:");		/*��ʾ���� rate*/
	scanf("%lf",&rate);			/*���� scanf() �������� rate,%lf �е� l ����ĸ*/
	sum = money * pow(1+rate,year);		/*�����ݺ��� pow() ���� */
	printf("sum = %.2f\n",sum);
	
	return 0;
}
