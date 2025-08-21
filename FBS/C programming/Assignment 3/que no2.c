//Accept three sides of a triangle from the user and determine whether the triangle is equilateral, isosceles, or scalene. 

#include<stdio.h>

void main()
{
	int a,b,c;
	
	printf("enter the sides of triangle\n");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a==b&&a==c&&b==c)
	{
		printf("the triangle is equilateral ");
	}
	else if(a==b||a==c)
	{
		printf("the triangle is isosceles ");	
	}
	else
	{
		printf("the triangle is scalene ");
	}
}