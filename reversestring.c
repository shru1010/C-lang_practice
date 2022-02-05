#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main()
{

	char inp[50],rev[50];
	int i,last;
	printf("enter string to reverse it\n");
	scanf("%s",inp);
	int l=strlen(inp);
	for(i=0,last=l;i<l;i++,last--)
	{
		rev[last]=inp[i];
		printf("rev[%d]=%c\n",last,rev[last]);
	}
	printf("reversed string is %s\n",rev);
}
