/*�򵥵Ĳ�����Ϸ*/
#include <stdio.h>

int main(void){
	int mynumber = 38;		/*�����ָ�����µ���*/
	int yournumber;
	
	printf("Input your number:");	/*��ʾ���������µ���*/ 
	scanf("%d",&yournumber);
	if(yournumber == mynumber){		/*����ȣ���ʾ����*/ 
		printf("OK!your are right!\n");
	}else{		/*������ȣ��Ƚϴ�С*/ 
		if(yournumber > mynumber){
			printf("Sorry!your number is bigger than my number!\n");	
		}else{
			printf("Sorry!your number is smaller than my number!\n");
		}
	}
	return 0;
}
