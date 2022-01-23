#include<stdio.h>
int main()
{
	char c;
	printf("enter char");
	scanf("%c",&c);
	if((c>=97 && c<=122)|| (c>=65 && c<=90))
		printf("%c is a char",c);
	else
		printf("%c isnt chr",c);

	return 0;
}
