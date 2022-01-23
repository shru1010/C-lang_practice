#include<stdio.h>

int main()
{

	int n;
	printf("Enter number to check even odd\n");
	scanf("%d",&n);
	if(n%2==1)
		printf("odd");
	else if(n%2==0 && n!=0)
		printf("even");
	else
		printf("zero");

}
