#include<stdio.h>

int main(){

	int n,a[n],sum=0;
	printf("size?");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("enter value");
		scanf("%d",&a[i]);
		sum=sum+a[i];
	        printf("sum is %d",sum);

	}

}
