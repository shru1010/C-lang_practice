#include<stdio.h>
#include<stdlib.h>

int main()
{

	float rain[5][12]={
			{1,1,1,1,1,1,1,1,1,1,1,1},
			{1,3.1,4.1,3.6,3.5,3.7,1.2,1.3,4.1,5.1,4.3,7.2},
			{1,6.3,5.4,5.5,4,4.6,3.7,2.8,2,1.1,4.1,6.2},
			{1,6.8,5.3,3.2,4,3,3.7,2.5,8.8,7.9,6.4,4.4},
			{1,6.6,6.3,5.4,2.5,6.6,1.7,2.8,3.9,5,6.1,7.1}
			};
	int year=2010,i,j;
	float totalSum=0.0,avgSumMonth,yearSum,avgSumYear=0.0;
	printf("YEAR\tRAINFALL\tAVG.RAIN\n");
	for(i=0,year=2010;i<5;i++,year++)
	{
		for(j=0;j<12;j++)
		{
			yearSum+=rain[i][j];
		}
		totalSum+=yearSum;
		avgSumMonth=yearSum/12;
		printf("%d\t%.2f\t\t%.2f\n",year,yearSum,avgSumMonth);
	}
	avgSumYear=totalSum/5;
	printf("TOTAL RAIN=%.2f  AVG.RAINFALL=%.2f\n",totalSum,avgSumYear);

	float monthlyAvg=0.0;
	printf("JAN\tFEB\tMARCH\tAPRIL\tMAY\tJUNE\tJULY\tAUG\tSEP\tOCT\tNOV\tDEC\n");
	for(i=0;i<12;i++)
	{
		for(j=0;j<5;j++)
		{
			monthlyAvg+=rain[j][i];
		}
		printf("%.2f\t",monthlyAvg);
	}
}
