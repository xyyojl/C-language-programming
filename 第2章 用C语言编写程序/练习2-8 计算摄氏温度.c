#include <stdio.h>

int main (void)
{
	int fahr,celsius;
	
	scanf("%d",&fahr);
	celsius = 5 * (fahr - 32) / 9;	/*�¶�ת������*/
	printf("Celsius = %d\n",celsius);	/*���� printf() ����������*/
	return 0;
}
