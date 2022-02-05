#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{


	char convert[30];
	printf("Enter string\n");
	scanf("%s",convert);
	for(int i=0;convert[i]!='\0';i++)
	{
		convert[i]=(char)toupper(convert[i]);
	}
	printf("The new string is:%s",convert);



}
