/*ͳ���ַ��������ո��س��������ַ��������ַ�*/
#include <stdio.h>

int main(void){
	int blank,digit,i,other;		/*�������������ֱ���ͳ�ƽ��*/
	char ch;					/*����һ���ַ�����ch*/ 
	
	digit = blank = other = 0;	/*���ô�Ž�������������ĳ�ʼֵΪ0*/
	printf("Enter 10 characters:");
	for(i=1;i<=10;i++){			/*ѭ��ִ����10��*/
		ch = getchar();		/*����һ���ַ�*/
		/*�� switch ��������Ӧ�� break*/ 
		switch(ch){
			case ' ':	/*����Ϊ�գ���ע��ո���ı�ʾ��ʽ*/ 
			case '\n':
				blank++;	/*2���������ʽ' ' �� '\n' ���ø�����*/ 
				break;		/*���� switch ���*/ 
			case '0':case '1':case '2':case '3':case '4':
			case '5':case '6':case '7':case '8':case '9':
				digit++;
				break;
			default:
				other++; 
				break;
		}
	}
	printf("blank=%d,digit=%d,other=%d\n",blank,digit,other);
	return 0;
}
