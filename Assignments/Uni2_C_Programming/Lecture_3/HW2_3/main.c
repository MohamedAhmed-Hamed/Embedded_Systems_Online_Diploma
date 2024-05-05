/*
 * main.c
 *
 *  Created on: May 5, 2024
 *      Author: BADA
 */

#include <stdio.h>

int main( )

{
	float  a,b,c;
	printf("Enter the three numbers: ");
	fflush(stdout);
	scanf("%f %f %f", &a,&b,&c);
	if(a>=b && a>=c)
		printf("Largest number=%.2f: ",a);

	else if(b>=a && b>=c)

		printf("Largest number=%.2f: ",b);
	else
		printf("Largest number=%.2f: ",c);

	return 0;
}


