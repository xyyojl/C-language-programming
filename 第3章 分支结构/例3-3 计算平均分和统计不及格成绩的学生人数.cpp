/*����һ��ѧ���ĳɼ�������ƽ���֣���ͳ�Ʋ�����ɼ���ѧ������*/ 
#include <stdio.h>

int main(void){
	int count,i,n;			/*count ��¼������ɼ��ĸ���*/ 
	double grade,total;		/*grade �������ĳɼ���total����ɼ�֮��*/ 
	
	printf("Enter n:");		/**/ 
	scanf("%d",&n); 
	total = 0;
	count = 0;
	for(i=1;i<=n;i++){
		printf("Enter grade #%d:",i);	/*��ʾ����� i ���ɼ�*/ 
		scanf("%lf",&grade); 			/*����� i ���ɼ�*/ 
		total = total + grade;			/*�ۼӳɼ�*/ 
		if(grade < 60){					/*ͳ�Ʋ�����ɼ���ѧ������*/ 
			count++;
		}
	} 
	printf("Grade average = %.2f\n",total/n);
	printf("Number of failures = %d\n",count);
	return 0;
}
