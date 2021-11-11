#include <stdio.h>
#include <stdlib.h>
int test(int x, int y)
        {
             return (x >= 100 && x <= 200) || (y >= 100 && y <= 200);
        }
int main(void){
	int x,y;
	printf("x?");
	scanf("%d",&x);
	printf("y?");
	scanf("%d",&y);
	printf("%d",test(x,y));
    }
