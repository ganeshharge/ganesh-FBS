//Write a program to check given 3 digit number is pallindrome or not

#include<stdio.h>

void main()
{
	int a,b,c,d,e,f;
	a=123;
	b= a%10;
	c=a/10;
	d=c%10;
	e=c/10;
	f=b*100+d*10+e;
	
	printf("The pallindrome of given no is  %d",f);
	
	if(a==f)
	{
		printf("\nthis is pallindrome");
	}
	else
	{
		printf("\nthis is not pallindrome");
	}
}