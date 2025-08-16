//Write a C program to input five numbers and find their average.

#include<stdio.h>

void main()
{
	float A,B,C,D,E,F;
	
	printf("ENTER ALL SUBJECT MARKS\n");
	printf("Maths= \n");
	scanf("%f",&A);
	printf("English= \n");
	scanf("%f",&B);
	printf("Marathi= \n");
	scanf("%f",&C);
	printf("Hindi= \n");
	scanf("%f",&D);     
	printf("IT= \n");
	scanf("%f",&E);  
	
	                
	F=(A+B+C+D+E)/5;
	
	printf("Average of all Subject is %f",F);
	            
}                                     
                                       