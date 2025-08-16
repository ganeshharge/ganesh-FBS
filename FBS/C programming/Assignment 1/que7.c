// Write a C program to convert given minutes into hours and remaining minutes.

#include<stdio.h>

void main()
{
	int A,B,C;
	
	A=456;
	
	B= A/60;
	C= A%60;
	
	printf("Total Hours=%d\n",B);
	
	printf("Remaining Minutes=%d",C);
	
}