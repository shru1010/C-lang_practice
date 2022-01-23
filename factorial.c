#include<stdio.h>
long int factorial(int n);
int main()
{

	int n;
	long int fact;
	printf("enter number for factorial\n");
	scanf("%d",&n);
	fact=factorial(n);
	printf("%ld is factorial\n",fact);
	return 0;
}

long int factorial(int n)
{
	if(n>=1)
		return n*factorial(n-1);
	else
		return 1;
}
