/*�����ݺ��� pow() ���ɳ˷���*/ 
#include <stdio.h>
double fact (int n);	/*�Զ��庯������������ƺ���������*/

int main(void){
	int i,n;
	double result;
	
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		result = fact(i);	/*�����Զ��庯�� fact(i) ���� i!*/ 
		printf("%d! = %.0f\n",i,result);
	} 
	return 0;
} 
/*������ n! �ĺ���*/
double fact (int n){	/*�����ײ�*/ 
	int i;
	double product;		/*���� product ���ڴ�Ž�����׳˵�ֵ��*/ 
	
	/*���� n!*/ 
	product = 1;	/*�ý׳�product �ĳ�ֵΪ1*/
	for(i=1;i<=n;i++){		/*ѭ�� n �Σ����� n!*/ 
		product = product * i;
	}
	return product;		/*���������������*/
}
