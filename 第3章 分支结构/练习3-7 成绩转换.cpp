#include <stdio.h>

int main(){
	int n;
	char result;
	
	scanf("%d",&n);
	if(n >= 90){
		result = 'A';
	}else if(n < 90 && n >= 80){
		result = 'B';	
	}else if(n < 80 && n >= 70){
		result = 'C';	
	}else if(n < 70 && n >= 60){
		result = 'D';	
	}else{
		result = 'E';	
	}
	
	printf("%c",result);
}
