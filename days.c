#include<stdio.h>

int main()
{

	int min;
	printf("no of mins???\n");
	scanf("%d",&min);
	double days=(double)min/(24*60);
	double years=(double)min/(365*24*60);
	printf("days=%f \nyears=%f",days,years);
}

