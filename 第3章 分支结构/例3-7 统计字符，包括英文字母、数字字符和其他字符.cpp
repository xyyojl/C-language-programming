/*统计字符，包括英文字母、数字字符和其他字符*/
#include <stdio.h>

int main(void){
	int digit,letter,other;		/*定义三个变量分别存放统计结果*/
	char ch;					/*定义一个字符变量ch*/
	int i; 
	
	digit = letter = other = 0;	/*设置存放结果的三个变量的初始值为0*/
	printf("Enter 10 characters:");
	for(i=1;i<=10;i++){			/*循环执行了10次*/
		ch = getchar();			/**/
		if((ch >= 'a' && ch <= 'z' ) || (ch >= 'A' && ch <= 'Z' )){	
			letter++; 			/*如果ch 是英文字母，累加 letter*/
		} else if(ch >= '0' && ch <= '9'){
			digit++;			/*如果ch 是数字字符，累加 digit*/
		} else{
			other++;			/*ch 是除字母、数字字符以外的其他字符，累加 other*/
		}
	}
	printf("letter=%d,digit=%d,other=%d\n",letter,digit,other);
	return 0;
}
