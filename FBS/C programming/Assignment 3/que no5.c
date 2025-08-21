//Accept the price from user. Ask the user if he is a student (user may say y or n). If he is a student and he has purchased more than 500 than discount is 20% otherwise 
//discount is 10%.But if he is not a student then if he has purchased more than 600 discount is 15% otherwise there is not discount.

#include<stdio.h>

void main()
{
	double a,b;
	char Q ;
	
	 printf("Enter the price\n");
	 scanf("%lf",&a);
	   
	 printf("Are you a student(Y/N)\n");
	 scanf(" %c",&Q);
	 
	 if(Q=='Y'||Q=='y')
	 {
	 	if(a>500)
	 	{
	 		printf("You got 20 percent discount\n ");
			b=a-(a*0.20);
			printf("Total price is %lf",b);	
		 }
		 else
		 {
		 	printf("You got 10 percent discount\n");
		 	b=a-(a*0.10);
			printf("Total price is %lf",b);
		 }
	 }
	 else
	 {
	 	if(a>600)
	 	{
	 		printf("You got 15 percent discount\n");
	 		b=a-(a*0.15);
			printf("Total price is %lf",b);
		 }
		 else
		 {
		 	printf("Buy more than 600 to get 15 percent off\n");
		 	printf("your total price is %lf",a);
		 }
	 }
}
	  