//Accept a number and check if it is divisible by 3, 5, or both.
//(Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by both" or” Divisible by None”)  

#include<stdio.h>

void main()
{
	int a,b;
	
	printf("Enter the no\n");
	scanf("%d",&a);
	
	if(a%3==0&&a%5==0)
	{
		printf("the number given is divisible by 3 and 5");
		
	}
	else if (a%3==0&&a%5!=0)
	{
		printf("the number given is divisible by 3 but not  by 5");
	}
	else if (a%3!=0&&a%5==0)
	{
		printf("the number given is divisible by 5 but not  by 3");
	}
	else if (a%3!=0&&a%5!=0)
	{
		printf("the number given is not divisible by 3 and 5");
	}
}