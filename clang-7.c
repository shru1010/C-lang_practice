#include<stdio.h>

int test(int x,int y,int z){

        return((x>=20 && x<=50)||(y>=20&&y<=50)||(z>=20 && z<=50));


}
int main(){

	int x,y,z;
	printf("x?");
	scanf("%d",&x);
        printf("y?");
        scanf("%d",&y);
        printf("z?");
        scanf("%d",&z);
	printf("%d",test(x,y,z));
}

