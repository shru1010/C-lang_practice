#include<stdio.h>
int calLength(char *str)
{
	int count=0;
	while(*str!='\0')
	{
		count++;
		str++;
	}

	return count+=1;
}
int main()
{
	char str[]={"22"};
//	printf("enter a string\n");
//	scanf("%s",str);
	int count =calLength(str);
	printf("lenth=%d",count);
}
