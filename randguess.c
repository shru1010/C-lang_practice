#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	time_t t;
	int n;
	srand((unsigned) time(&t));
	n = rand() % 20 + 1; 
	int guess;
	for(int i=1;i<=5;i++)
	{
		printf("you are on %d try of 5 tries\n",i);
		printf("guess a number between 0 to 20\n");
        	scanf("%d",&guess);
		if(guess==n){
			printf("got it right!!!!!!!!!!!\n");
			return 0;
		}
		else if(guess<0 || guess>20)
		{
			printf("not in range\n");
		}
		else if(n>guess)
			printf("%d is smaller than my number\n",guess);
		else if(n<guess)
			printf("% is larger\n",guess);
	}
	printf("5 tries over,%d was the number\n",n);

	return 0;
}
