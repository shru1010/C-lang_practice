#include<stdio.h>

int main(){

	int i,n;
	printf("array size?");
	scanf("%d",&n);
	int a[n];
		
	for(i=0;i<n;i++)
	{
		printf("new element of %d",i);
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}







}