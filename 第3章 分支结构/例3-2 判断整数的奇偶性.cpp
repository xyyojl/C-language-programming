/*判断整数的奇偶性*/ 
#include <stdio.h>

int main(void){
	int number; 
	
	printf("Enter a number:");	/*提示输入*/ 
	scanf("%d",&number); 		/*输入一个数*/
	if(number % 2 == 0){		/*若 number 除以2的余数是0，则为偶数*/
		printf("This number is even.\n");
	}else{						/*若 number 除以2的余数不是0，则为奇数*/
		printf("This number is odd.\n");
	}
	return 0;
}
