#include<stdio.h>

int main()
{
	int w=0,h=0,p=0,a=0;
	printf("give width height of rectangle");
	scanf("%d%d",&w,&h);
        p=2*(w+h);
        a=w*h;
	printf("perimeter =%d\n area =%d",p,a);
	return 0;


}
