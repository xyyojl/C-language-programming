
#include <stdio.h>
int main(void){
	int i,n,sum;

	printf("Enter n:");		/*������ʾ*/
	scanf("%d",&n);			/*���� scanf() �������� n*/
	sum = 0;				/*���ۼӺ�sum�ĳ�ֵΪ0*/
	for(i=1;i<=n;i++){		/*ѭ��ִ��n��*/ 
		sum = sum + i;		/*�����ۼ� i ��ֵ*/
	}
	/*�����ۼӺ�*/
	printf("Sum of numbers from 1 to %d is %d \n",n,sum);
	
	return 0;
} 
