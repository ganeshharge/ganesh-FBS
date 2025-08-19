/* Calculating total salary based on basic. If basic <=5000 da, ta and hra will be 
10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30% 
respectively*/


#include<stdio.h>

void main()
{
	int basic=2000;
	
	if(basic<=5000)
	{
		printf("da will get 10%\nta will get 20%\nhra will get 25%");
	}
	else
	{
		printf("da will get 15%\nta will get 25%\nhra will get 30%");
	}
}