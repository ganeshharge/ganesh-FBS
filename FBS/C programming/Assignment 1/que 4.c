//Write a C program to swap two numbers using a temporary third variable.

#include<stdio.h>

void main()
{
	int A,B,C;
	
	A=10, B= 20;
	
	C=A;
	A=B;
	B=C;
	
	
	printf("A=%d B=%d",A,B);
}