/* ���� 1-1/3+1/5-1/7+... �� n ���*/ 
#include <stdio.h>

int main(void){
	int denominator,flag,i,n;
	double item,sum;
	
	printf("Enter n:");
	scanf("%d",&n);
	/*ִ��ѭ��ǰ������������ֵ*/ 
	flag = 1;	/*flag ��ʾ�� i ��ķ��ţ���ʼΪ��*/ 
	denominator = 1;	/*denominator��ʾ�� i ��ķ�ĸ����ֵΪ1*/ 
	sum = 0;	/*���ۼƺ�sum�ĳ�ֵΪ0*/ 
	/*�� for ���ʵ��ѭ����ѭ��ִ�� n ��*/ 
	for(i=1;i<=n;i++){
		item = flag * 1.0 / denominator;	/*����� i ���ֵ*/ 
		sum = sum + item;					/*�ۼӵ� i ���ֵ*/ 
		flag = -flag;						/*�ı���ţ�Ϊ��һ��ѭ����׼��*/ 
		denominator = denominator + 2;		/*��ĸ����2��Ϊ��һ��ѭ����׼��*/ 
	} 
	printf("sum=%f\n",sum);
	return 0;
}
