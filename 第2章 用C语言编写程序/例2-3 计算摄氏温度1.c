/*�������¶�ת��Ϊ�����¶�*/
#include <stdio.h>

int main (void)
{
	/*�����������ͱ�����fahr ��ʾ���϶ȣ�celsius ��ʾ���϶�*/
	int fahr,celsius;
					/*���У����ڷָ���������Ϳ�ִ�����*/
	fahr = 100;		/*�Ա��� fahr ��ֵ*/
	celsius = 5 * (fahr - 32) / 9;	/*�¶�ת������*/
	printf("fahr = %d, celsius = %d\n",fahr,celsius);	/*���� printf() ����������*/
	return 0;
}
