#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char intrest[80];
	int letter=0,digit=0,punc=0;
	printf("Enter a interesting string to count no.of letters numbers and punctuations\n");
	scanf("%s",intrest);
	int i=0;
	while(intrest[i])
	{
		if(isalpha(intrest[i]))
		{
			letter++;
		}
		else if(isdigit(intrest[i]))
		{
			digit++;
		}
		else if(ispunct(intrest[i]))
		{
			punc++;
		}
		i++;
	}
	printf("Letters=%d\tDigits=%d\tPunctuations=%d\n",letter,digit,punc);


}
