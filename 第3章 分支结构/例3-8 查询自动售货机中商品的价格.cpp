/*��ѯ�Զ��ۻ�������Ʒ�ļ۸�*/
#include <stdio.h>

int main(void){
	int choice,i;
	double price;
	
	for(i=1;i<=5;i++){
		/*����5����ʾ�˵�*/
		printf("[1] Select crisps \n");
		printf("[2] Select popcorn \n");
		printf("[1] Select chocolate \n");
		printf("[1] Select cola \n");
		printf("[0] exit \n");
		
		printf("Enter choice:");
		scanf("%d",&choice);	/*�����û�����ı��*/
		/*�������0����ǰ���� for ѭ��*/ 
		if(choice == 0){
			break;	/*�˴��� break ����for ѭ��*/ 
		}
		/*��������ı�ţ�����Ӧ�ļ۸�ֵ��price*/
		switch(choice){
			case 1:price=3.0;break;	/*�� break ����switch ���*/ 
			case 2:price=2.5;break;
			case 3:price=4.0;break;
			case 4:price=3.5;break;
			default:price=0.0;break;
		} 
		/*�����Ʒ�۸�*/ 
		printf("price = %0.1f \n",price);
	}  /*for ��ѭ����������*/ 
	printf("Thanks \n");	/*������ѯ��лл�û�ʹ��*/ 
	return 0;
}
