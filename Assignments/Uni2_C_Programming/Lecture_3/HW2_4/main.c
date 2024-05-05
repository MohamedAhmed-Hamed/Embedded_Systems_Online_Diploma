/*
 * main.c
 *
 *  Created on: May 5, 2024
 *      Author: BADA
 */
#include <stdio.h>

int main( )

{
	float  a;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%f", &a);
	if(a>0)
		printf("%.2f is positive ",a);

	else if(a ==0)
		printf("You entered zero ",a);

	else
		printf("%.2f is negative ",a);

	return 0;
}

