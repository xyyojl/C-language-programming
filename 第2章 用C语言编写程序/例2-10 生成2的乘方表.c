/*�����ݺ��� pow() ���ɳ˷���*/ 
#include <stdio.h>
#include <math.h>

int main(void){
	int i,n;
	double power;
	
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		power = pow(2,i);	/* �����ݺ��� pow(2,i) ����2��i�η� */
		printf("pow(2,%d) = %.0f\n",i,power);
	} 

	return 0;
}
