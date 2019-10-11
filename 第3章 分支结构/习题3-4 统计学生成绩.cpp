#include<stdio.h>

int main(void)
{
	int n,grade,score1,score2,score3,score4,score5;
	int i;
	
	score1=score2=score3=score4=score5=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&grade);
		grade = grade / 10;
		switch(grade){
			case 10:
			case 9:score1++;break;
			case 8:score2++;break;
			case 7:score3++;break;
			case 6:score4++;break;
			default:score5++;break;
		}
	}
	printf("%d %d %d %d %d",score1,score2,score3,score4,score5);

    return 0;
}
