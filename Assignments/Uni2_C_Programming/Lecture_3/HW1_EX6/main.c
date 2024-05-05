/*
 * main.c
 *
 *  Created on: May 5, 2024
 *      Author: BADA
 */

#include <stdio.h>

int main( )

{
	float a,b,tmp;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f",&b);
	tmp=a; // tmp has a in memory
	a=b; // a has b value now
	b=tmp; // b=a basically

	printf("\nAfter swapping, value of a = %.2f\n", a);
	printf("After swapping, value of b = %.2f", b);



    return 0;
}

