#include<stdio.h>

int test(int a,int b,int c){

	return(a+b==c||b+c==a||a+c==b);
}

int main(){

	int a,b,c;
	printf("a?");
	scanf("%d",&a);
        printf("b?");
        scanf("%d",&b);
        printf("c?");
        scanf("%d",&c);
	
	printf("%d",test(a,b,c));
}
