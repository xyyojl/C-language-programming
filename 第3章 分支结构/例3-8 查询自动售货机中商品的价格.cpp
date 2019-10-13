/*查询自动售货机中商品的价格*/
#include <stdio.h>

int main(void){
	int choice,i;
	double price;
	
	for(i=1;i<=5;i++){
		/*以下5行显示菜单*/
		printf("[1] Select crisps \n");
		printf("[2] Select popcorn \n");
		printf("[1] Select chocolate \n");
		printf("[1] Select cola \n");
		printf("[0] exit \n");
		
		printf("Enter choice:");
		scanf("%d",&choice);	/*接收用户输入的编号*/
		/*如果输入0，提前结束 for 循环*/ 
		if(choice == 0){
			break;	/*此处用 break 跳出for 循环*/ 
		}
		/*根据输入的编号，将相应的价格赋值给price*/
		switch(choice){
			case 1:price=3.0;break;	/*用 break 跳出switch 语句*/ 
			case 2:price=2.5;break;
			case 3:price=4.0;break;
			case 4:price=3.5;break;
			default:price=0.0;break;
		} 
		/*输出商品价格*/ 
		printf("price = %0.1f \n",price);
	}  /*for 的循环体语句结束*/ 
	printf("Thanks \n");	/*结束查询，谢谢用户使用*/ 
	return 0;
}
