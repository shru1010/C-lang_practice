#include<stdio.h>

int main(){

	int i,n;
	printf("value of size of array?");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter value of %d element of array",i);
		scanf("%d",&a[i]);
	}


	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);	
	}
}
