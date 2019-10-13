/*简单的猜数游戏*/
#include <stdio.h>

int main(void){
	int mynumber = 38;		/*计算机指定被猜的数*/
	int yournumber;
	
	printf("Input your number:");	/*提示输入你所猜的数*/ 
	scanf("%d",&yournumber);
	if(yournumber == mynumber){		/*若相等，显示猜中*/ 
		printf("OK!your are right!\n");
	}else{		/*若不相等，比较大小*/ 
		if(yournumber > mynumber){
			printf("Sorry!your number is bigger than my number!\n");	
		}else{
			printf("Sorry!your number is smaller than my number!\n");
		}
	}
	return 0;
}
