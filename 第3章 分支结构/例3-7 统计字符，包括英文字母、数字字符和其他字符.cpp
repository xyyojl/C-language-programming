/*ͳ���ַ�������Ӣ����ĸ�������ַ��������ַ�*/
#include <stdio.h>

int main(void){
	int digit,letter,other;		/*�������������ֱ���ͳ�ƽ��*/
	char ch;					/*����һ���ַ�����ch*/
	int i; 
	
	digit = letter = other = 0;	/*���ô�Ž�������������ĳ�ʼֵΪ0*/
	printf("Enter 10 characters:");
	for(i=1;i<=10;i++){			/*ѭ��ִ����10��*/
		ch = getchar();			/**/
		if((ch >= 'a' && ch <= 'z' ) || (ch >= 'A' && ch <= 'Z' )){	
			letter++; 			/*���ch ��Ӣ����ĸ���ۼ� letter*/
		} else if(ch >= '0' && ch <= '9'){
			digit++;			/*���ch �������ַ����ۼ� digit*/
		} else{
			other++;			/*ch �ǳ���ĸ�������ַ�����������ַ����ۼ� other*/
		}
	}
	printf("letter=%d,digit=%d,other=%d\n",letter,digit,other);
	return 0;
}
