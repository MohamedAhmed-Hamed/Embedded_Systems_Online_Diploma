/*
 * main.c
 *
 *  Created on: May 5, 2024
 *      Author: BADA
 */

#include <stdio.h>

int main( )

{
	 float  n1,n2;
	 char c;

	printf("Enter operator (-,+,*,/): ");
	fflush(stdout);
	scanf("%c", &c);
	printf("Enter two operands: ");
	fflush(stdout);

	scanf("%f %f", &n1,&n2);


	switch(c){
	case '-':
		printf("%.1f -%.1f=%.1f",n1,n2,n1-n2);
		break;
	case '+':
		printf("%.1f +%.1f=%.1f",n1,n2,n1+n2);
		break;
	case '*':
		printf("%.1f *%.1f=%.1f",n1,n2,n1*n2);
		break;
	case '/':
		printf("%.1f /%.1f=%.1f",n1,n2,n1/n2);
		break;
	default:
		printf("Error !!! operator is not correct. " );
	}

	return 0;
}

