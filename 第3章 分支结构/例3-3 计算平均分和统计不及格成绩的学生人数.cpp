/*输入一批学生的成绩，计算平均分，并统计不及格成绩的学生人数*/ 
#include <stdio.h>

int main(void){
	int count,i,n;			/*count 记录不及格成绩的个数*/ 
	double grade,total;		/*grade 存放输入的成绩，total保存成绩之和*/ 
	
	printf("Enter n:");		/**/ 
	scanf("%d",&n); 
	total = 0;
	count = 0;
	for(i=1;i<=n;i++){
		printf("Enter grade #%d:",i);	/*提示输入第 i 个成绩*/ 
		scanf("%lf",&grade); 			/*输入第 i 个成绩*/ 
		total = total + grade;			/*累加成绩*/ 
		if(grade < 60){					/*统计不及格成绩的学生人数*/ 
			count++;
		}
	} 
	printf("Grade average = %.2f\n",total/n);
	printf("Number of failures = %d\n",count);
	return 0;
}
