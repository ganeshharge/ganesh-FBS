/* Calculating total salary based on basic. If basic <=5000 da, ta and hra will be 
10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30% 
respectively*/


#include<stdio.h>

void main()
{
	double basic=6000;
	double da,ta,hra,ts;
	
	if(basic<=5000)
	{
		da=basic*0.10;
		ta=basic*0.20;
		hra=basic*0.25;
	}
	else
	{
		da=basic*0.15;
		ta=basic*0.25;
		hra=basic*0.30;
	}
	
	printf(" da= %lf\n ta= %lf \n hra= %lf",da,ta,hra);
	
	ts= basic+da+ta+hra;
	printf("\ntotal salary= %lf",ts);
}