#include<stdio.h>
#include<stddef.h>
int main()
{

	int a=10;//creating pointer ith hardcoded value
	int *pa=&a;//assigning address of var oto pointer
//	result=*pa + 5;
	printf("a=%d\n",a);//value of var
	printf("%d\n",*pa);//value of what pointer is pointing to
	printf("%p\n",(void*)&pa);//address of pointer
	printf("%p\n",pa);//vaue of pointer

}
