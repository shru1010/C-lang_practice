#include<stdio.h>

int main()
{
	int grades[10];
	int sum=0;
	float avg=0.0f;
	for(int i=0;i<10;i++)
	{
		printf("enter grade: \n");
		scanf("%d",&grades[i]);
		sum+=grades[i];
	}
	avg=(float)sum/10;
	printf("sum of grades is=%d\nAvg is=%.2f",sum,avg);
	



}
