#include<stdio.h>

int main()
{

	int a=10;
	printf("a=%d\n",a);
	char w='w';
	const int *pa=&a;//value  cant  be changed
	printf("%d\n",*pa);
	a=15;
	printf("%d\n",a);
	char* const pw=&w;
	printf("%c\n",w);
	printf("%p\n",pw);
	char s='s';
//	pw=&s	
	printf("%c\n",s);
	printf("%p",pw);
}
