#include <stdio.h>

int main()
{
   int n,i,count,grade;
   double average,sum;
   
   count = 0;
   sum = 0;
   scanf("%d\n",&n);
   if(n <= 0){
   		printf("average = 0.0\n");
   		printf("count = 0\n");
   }else{
   		for(i=0;i<n;i++){
   			scanf("%d",&grade);
   			sum += grade;
   			if(grade >= 60){
   				count++;
			}
		}
		printf("average = %.1f\n", sum/n);
		printf("count = %d\n", count);
   }
	
    return 0;
}

