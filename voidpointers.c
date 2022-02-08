#include<stdio.h>

int main()
{

	int a=10;
	char c='c';
	void *pvoid=NULL;
	
	pvoid=&a;
	printf("value of var a=%d\n",*(int *)pvoid);

	pvoid=&c;
	printf("value of c=%c\n",*(char *)pvoid);


}
