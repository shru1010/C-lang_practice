#include<stdio.h>
#include<stdlib.h>
int gcd(int a,int b);
float absolute(float a);
int squarert(int a);
int main()
{
	int x=gcd(12,24);
	float y= absolute(-77.98);
	int z=squarert(9);
	printf("%d is gcd\n",x);
	printf("%.2f is abs\n",y);
	printf("%d",z);
}
int gcd(int a,int b)
{
	int gcd;
	for(int i=1;i<=a && i<=b;i++)
	{
		if(a%i==0 && b%i==0)
		{
			gcd=i;
		}
	}
	return gcd;
}
float absolute(float a)
{
	if(a<0)
	{
		a=a*(-1);
		return a;
	}
	else
		return a;
}
int squarert(int a)
{

	if(a<0)
		return -1;
	else{
		for(int i=1;i<a;i++)
		{
			if(i*i==a)
				return i;
		}
	}
}
