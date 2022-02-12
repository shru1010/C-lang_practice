#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char *string=NULL;
	int size;
	printf("enter string size\n");
	scanf("%d",&size);
	//malloc-initial mem alloc
	string=(char *)malloc(size * sizeof(char));
	if(string!=NULL)
	{
		printf("enter string\n");
		scanf("%s",string);
		printf("input is: %s\n",*string);
	}
	free(string);//free mem
	string=NULL;
	return 0;
}
