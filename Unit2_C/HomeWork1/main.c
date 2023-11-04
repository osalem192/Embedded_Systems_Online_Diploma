/*
 * main.c
 *
 *  Created on: Nov 4, 2023
 *      Author: osale
 */
#include <stdio.h>

int main()
{

	int x, y;
	printf("##########Console-output###\nC Programming\n");

//	#################	EX2	#####################
//	printf("enter your int: ");
//	scanf("%d",&x);
//	printf("you entered: %d\n",x);
//	#############################################

//	#################	EX3	#####################
//	printf("enter two int: ");
//	scanf("%d %d",&x, &y);
//	printf("Sum: %d\n", x+y);
//	#############################################

//	#################	EX4	#####################
//	float a,b;
//	printf("enter two numbers: ");
//	scanf("%f %f",&a, &b);
//	printf("Product %f\n", a*b);
//	#############################################

//	#################	EX5	#####################
//	char c;
//	printf("enter a Character: ");
//	scanf("%c",&c);
//	printf("ASCII value of %c = %d\n", c,c);
//	#############################################

//	#################	EX6 & 7	#####################
	float a,b;
	printf("enter value of a: ");
	scanf("%f",&a);
	printf("enter value of b: ");
	scanf("%f",&b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("After swapping, value of a = %f \n", a);
	printf("After swapping, value of b = %f \n", b);
//	#############################################
	printf("###########################");
	return 0;
}


