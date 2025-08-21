// Accept the age and check if the person is: 
//Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)

#include<stdio.h>

void main()
{
	int a;
	
	printf("Enter your age\n");
	scanf("%d",&a);
	
	if(a<12)
	{
		printf("you are Child");
	}
	else if(a>=12&&a<=19)
	{
		printf("you are Teenager");
			
	}
	else if(a>=20&&a<=59)
	{
		printf("you are Adult");
	}
	else if(a>60&&a<=120)
	{
		printf("you are senior");
	}
	else if(a<0||a>120)
	{
		printf("Enter valid age");
	}
}