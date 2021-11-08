#include<stdio.h>

int main(){
	int a,b,s,t;
	printf("value of a:\n");
	scanf("%d",&a);
	printf("value of b\n");
	scanf("%d",&b);
	s=a+b;
	t=3*s;
	if(a!=b){
		printf("values are same so triple sent,s=%d",s);
	}
	else if(a==b){
		printf("triple t=%d",t);
	}


}
