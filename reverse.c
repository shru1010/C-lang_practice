#include<stdio.h>

int main()
{
	int n,rem=0,rev=0;
	printf("enter number to be reversed");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	printf("rev number is %d",rev);
}
