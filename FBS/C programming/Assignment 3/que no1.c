//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.
            
#include<stdio.h>

void main()
{
	int a,b,c;
	char op;
	
	printf("enter first number\n");
	scanf("%d",&a);	
	
	printf("Select\n '+' for add\n '-' for sub\n '*' for mul\n '/' for div\n  '%' for mod\n");
	scanf(" %c",&op);
	
	printf("enter secound number\n");
	scanf("%d",&b);

	
	if(op=='+')
	{
		c=a+b;
		printf("addition=%d",c);
	}
	else if(op=="-")
	{
		c=a-b;
		printf("%d",c);
	}
	else if(op=='*')
	{
		c=a*b;
		printf("%d",c);
	}
	else if(op=='/')
	{
		c=a/b;
		printf("%d",c);
	}
	else if(op=='%')
	{
		c=a%b;
		printf("%d",c);
	}
	
} 