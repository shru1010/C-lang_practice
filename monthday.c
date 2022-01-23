#include<stdio.h>
#define month 13
int main()
{
	int days[month];
	for(int i=0;i<month;i++)
	{
		printf("for month %d number of days are??\n",i);
		scanf("%d",&days[i]);
	}
	for(int i=0;i<month;i++){
	printf("month %i has %d days\n",i,days[i]);
	}


}
