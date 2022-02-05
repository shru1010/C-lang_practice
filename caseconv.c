#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{

	char bigstr[50];	
	char smallstr[20];
	printf("Enter a big string\n");
	scanf("%s",bigstr);
	printf("enter small string\n");
	scanf("%s",smallstr);
	printf("Big string:%s \tsmall string=%s\n",bigstr,smallstr);

	for(int i=0;bigstr[i]!='\0';i++)
	{
		bigstr[i]=(char)toupper(bigstr[i]);
	}
	for(int i=0;smallstr[i]!='\0';i++)
	{
		smallstr[i]=(char)toupper(smallstr[i]);
	}
	printf("%s",((strstr(bigstr,smallstr)==NULL)?"was not":"was"));
}
