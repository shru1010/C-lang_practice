#include<stdio.h>


int first(int x,int y){
	
	int lstd1= x%10;
	while(x>=10){
		x=x/10;
	}
	int lstd2=y%10;
	while(y>=10){
		y=y/10;
	}
	if(lstd1==lstd2)
		return 1;

}

int main(){

	int x,y;
	printf("x?");
	scanf("%d",&x);
	printf("y");
	scanf("%d",&y);
	printf("%d",first(x,y));
}
