/*
 * main.c
 *
 *  Created on: May 5, 2024
 *      Author: BADA
 */

#include <stdio.h>

int main( )

{
	 int  n;
	unsigned long  long int factor=1;
	int i=1;
	printf("Enter an integar: ");
	fflush(stdout);
	scanf("%d", &n);
	if(n<0)
		printf("Error !!! Factorial of -ve  number doesnt exist. ");
	else{

	while(i <=n){
		factor*=i;
		++i; // ++i (i=6 then stored)   i++ ( stored then +1 )
	}}
	printf("Factorial= %lu",factor);


	return 0;
}

