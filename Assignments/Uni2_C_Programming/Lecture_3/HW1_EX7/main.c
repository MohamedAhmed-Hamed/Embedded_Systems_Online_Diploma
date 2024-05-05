/*
 * main.c
 *
 *  Created on: May 5, 2024
 *      Author: BADA
 */
#include <stdio.h>

int main( )

{
	 int x,y;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%d",&x);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%d",&y);
	y=y+x;   // y=y+x is not y=x+y (unlike Matlab, .* element wise)
	x=y-x;
	y=y-x;



	printf("\nAfter swapping, value of a = %d\n", x);
	printf("After swapping, value of b = %d", y);



    return 0;
}

