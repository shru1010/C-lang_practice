#include<stdio.h>

int main()
{

	int n,temp,rev=0,rem=0;
	printf("pall number");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}

	if(temp==rev)
		printf("pall\n");
	else
		printf("not");
	return 0;
}
