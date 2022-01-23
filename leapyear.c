#include<stdio.h>

int main()
{
	int n;
	printf("enter the year\n");
	scanf("%d",&n);
	if(n%4==0 && n%100!=0)
	{	
		printf("%d is a leap year\n",n);
	}
	else
		printf("%d isnt leap yer\n",n);
	return 0;
}
