#include<stdio.h>
#include<stdbool.h>

int main(){

	int n;
	bool t=true,f=false;
	printf("n:");
	scanf("%d",&n);
	if(n%3==0||n%7==0)
		printf("%d",t);
	else
		printf("%d",f);


}
