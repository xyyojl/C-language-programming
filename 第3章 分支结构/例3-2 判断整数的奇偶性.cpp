/*�ж���������ż��*/ 
#include <stdio.h>

int main(void){
	int number; 
	
	printf("Enter a number:");	/*��ʾ����*/ 
	scanf("%d",&number); 		/*����һ����*/
	if(number % 2 == 0){		/*�� number ����2��������0����Ϊż��*/
		printf("This number is even.\n");
	}else{						/*�� number ����2����������0����Ϊ����*/
		printf("This number is odd.\n");
	}
	return 0;
}
