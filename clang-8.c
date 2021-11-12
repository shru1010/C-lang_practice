#include<stdio.h>

int test(int x,int y){

	if(x==y)
		return 0;
	else if(x<y)
		return y;
	else
		return x;
}


int main(){

	int x,y;
	printf("x?");
	scanf("%d",&x);
	printf("y?");
	scanf("%d",&y);
	printf("%d",test(x,y));
}


