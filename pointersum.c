#include<stdio.h>
int sum(int arr[],int n)
{

	int sumIs=0,*psumIs;
	int *psumEnd=arr+n;
	for(psumIs=arr;psumIs<psumEnd;psumIs++)
	{
		sumIs+=*psumIs;
	}

	return sumIs;

}
int main()
{
	//int n=10;
	int arr[10]={1,1,1,1,1,1,1,1,1};
	int *parr=arr;
	int sumIs=sum(arr,10);
	printf("sum is =%d\n",sumIs);
}
