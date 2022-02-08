#include<stdio.h>
int main()
{

	int arr[10]={0,1,2,3,4,5,6,7,8,9};
	int *parr=arr;
	int choose=0;
	printf("enter value to print value\n");
	scanf("%d",&choose);
	printf("%d value in arr is %d",choose,*(parr+choose));
//	printf("arr[3]=%d",*(parr+7));
//	parr+=1;
//	printf("\n arr[1]=%d",*parr);



}
