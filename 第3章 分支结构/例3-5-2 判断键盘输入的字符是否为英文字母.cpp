/*�жϼ���������ַ��Ƿ�ΪӢ����ĸ*/
#include <stdio.h>

int main(void){
	char ch;
	
	printf("Type in an expression:"); 
	ch = getchar();		/*����ch���մӼ��������һ���ַ�*/
	if((ch >= 'a' && ch <= 'z' ) || (ch >= 'A' && ch <= 'Z' )){	/*�ж��Ƿ�ΪӢ����ĸ������Сд*/
		printf("It is a letter.\n");
	}else{
		printf("It is not a letter.\n");
	}
	return 0;
}
