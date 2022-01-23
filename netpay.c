#include<stdio.h>
#include<stdlib.h>
#define PAYRATE 12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST 0.25
#define OVERTIME 40

int main()
{
	int hrs=0;
	double grosspay=0.0,taxes=0.0,netpay=0.0;
	printf("hours??");
	scanf("%d",&hrs);
	if(hrs<=40)
	{
		grosspay=hrs*PAYRATE;
	}	
	else
	{
		grosspay=40*PAYRATE;
		double overTimePay=(hrs-40)*(PAYRATE*1.5);
		grosspay+=overTimePay;
	}

	//taxes
	if(grosspay<=300){
		taxes=grosspay*TAXRATE_300;
	}
	else if(grosspay>300 && grosspay<=450)
	{
		taxes=300*TAXRATE_300;
		taxes+=(grosspay-300)*(TAXRATE_150);
	}
	else if(grosspay>450)
	{
		taxes=300*TAXRATE_300;
		taxes+=(grosspay-300)*(TAXRATE_150);
		taxes+=(grosspay-450)*(TAXRATE_REST);
	}
	netpay=grosspay-taxes;
	printf("grosspay=%.2f\ntaxes=%0.2f\nnetpay=%0.2f\n",grosspay,taxes,netpay);

	return 0;
}		
