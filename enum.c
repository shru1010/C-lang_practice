#include<stdio.h>

int main()
{

	enum Company{GOOGLE,FACEBOOK,XEROX,YAHOO,EBAY,MICROSOFT};
	enum Company comp1=XEROX;
	enum Company comp2=GOOGLE;
	enum Company comp3=EBAY;
	printf("%d\n%d\n%d",comp1,comp2,comp3);



	return 0;

}
