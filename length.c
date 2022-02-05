#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char str[50],str1[50],str2[50],result[100],string1[20],string2[20];
	int count=0,count1=0,k,j;
	printf("enter a string to check its length\n");
	scanf("%s",str);
	for(int i=0;str[i]!='\0';i++)
	{
		count++;
	}
	printf("string length is %d",count);
	printf("enter a string for concat\n");
	scanf("%s",str1);
	printf("enter 2nd string for concat\n");
	scanf("%s",str2);
	for(int i=0;str1[i]!='\0';i++)
	{
		result[i]=str1[i];
		count1++;
	}
	printf("count1=%d\n",count1);
	for(j=count1,k=0;str2[k]!='\0';j++,k++)
	{
	result[j]=str2[k];
	}
	printf("concat string is %s\n",result);
	
	printf("enter string1\n");
	scanf("%s",string1);
	printf("string 2\n");
	scanf("%s",string2);
	for(int i=0;string1[i]!='\0'&& string2[i]!='\0';i++)
	{
		if(string1[i]!=string2[i])
		{
			printf("strings not the same");
			break;
		}
		else
			printf("strings the same");
	}

}
