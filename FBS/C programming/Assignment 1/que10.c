//Write a C program to input marks of five subjects, find the total marks, and calculate the percentage.

#include<stdio.h>

void main()
{
	
	float A,B,C,D,E,F,G,H;
	
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
	G=(A+B+C+D+E);
	
	H=  (G/500)*100;
	
	
		printf("Average of all Subject is %f\n",F);
		
			printf("Percentage of all Subject is %f",H);
}