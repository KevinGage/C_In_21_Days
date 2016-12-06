/* Write a program that uses a function to find the average of five type float values entered by the user*/

#include <stdio.h>

float a,b,c,d,e;

float find_average(float, float, float, float, float);

int main (void)
{
	printf("\n\nInput 5 numbers to find the average\n");
	
	scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);

	printf("\n\nThe average is %f", find_average(a,b,c,d,e));

	return 0;
}

float find_average(float f, float g, float h, float i, float j)
{
	return ((f+g+h+i+j) /5);
}
