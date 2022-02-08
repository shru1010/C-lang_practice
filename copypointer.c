#include<stdio.h>
void copyString(char *string2,char *string1)
{

	for(;*string1!='\0';string1++,string2++)
	{
		*string2=*string1;
	}

	*string2='\0';
}
int main(){
	char string1[20]={"I am a cute person"};
	char string2[20];
	copyString(string2,string1);
	printf("%s\n",string2);
}
