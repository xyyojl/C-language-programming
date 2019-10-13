/*判断键盘输入的字符是否为英文字母*/
#include <stdio.h>

int main(void){
	char ch;
	
	printf("Type in an expression:"); 
	ch = getchar();		/*变量ch接收从键盘输入的一个字符*/
	if((ch >= 'a' && ch <= 'z' ) || (ch >= 'A' && ch <= 'Z' )){	/*判断是否为英文字母，含大小写*/
		printf("It is a letter.\n");
	}else{
		printf("It is not a letter.\n");
	}
	return 0;
}
