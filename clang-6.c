#include<stdio.h>

int test(int x,int y){

        return(x<0 && y>100 || x>100 && y<0);

}
int main(){

	int a,b;
	printf("a?");
	scanf("%d",&a);
	printf("b?");
	scanf("%d",&b);
	printf("%d",test(a,b));
}

