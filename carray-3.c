#include<stdio.h>

int main(){

	int i,n;
	printf("size");
	scanf("%d",&n);
	int a[n],sum=0;
	
	for(i=0;i<n;i++){
		printf("ement %d value",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		sum+=a[i];
	}
        printf("%d is sum",sum);

}
