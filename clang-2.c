#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){

	int n,absn,t;
	printf("enter value of n\n");
	scanf("%d",&n);
	absn=abs(n);
	t=3*absn;
	if(absn>51)
		printf("value of abs of n tripled is %d",t);

}
