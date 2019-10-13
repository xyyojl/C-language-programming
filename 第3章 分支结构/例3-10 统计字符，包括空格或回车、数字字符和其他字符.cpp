/*统计字符，包括空格或回车、数字字符和其他字符*/
#include <stdio.h>

int main(void){
	int blank,digit,i,other;		/*定义三个变量分别存放统计结果*/
	char ch;					/*定义一个字符变量ch*/ 
	
	digit = blank = other = 0;	/*设置存放结果的三个变量的初始值为0*/
	printf("Enter 10 characters:");
	for(i=1;i<=10;i++){			/*循环执行了10次*/
		ch = getchar();		/*输入一个字符*/
		/*在 switch 语句中灵活应用 break*/ 
		switch(ch){
			case ' ':	/*语句段为空，请注意空格符的表示方式*/ 
			case '\n':
				blank++;	/*2个常量表达式' ' 和 '\n' 公用该语句段*/ 
				break;		/*跳出 switch 语句*/ 
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
