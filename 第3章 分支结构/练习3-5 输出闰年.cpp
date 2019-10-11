#include <stdio.h>

int main()
{
	int year,i;
	int count;
	
	count = 0; 
	scanf("%d",&year);
	if(year <= 2000 || year > 2100){
		printf("Invalid year!");
		return 0;
	}else{
		for(i=2001;i<=year;i++){
			if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)){
				count++; 
				printf("%d\n",i);
			}
		}
	}
	
	if(count == 0){
		printf("None");
	} 
	
    return 0;
}

