/*
 * main.c
 *
 *  Created on: May 5, 2024
 *      Author: BADA
 */
#include <stdio.h>

int main( )

{
	int x;
	printf("Enter Number you want to check: ");
	fflush(stdout);
	scanf("%d", &x);
	if(x%2 ==0)
		printf("%d is Even",x);
	else
		printf("%d is Odd",x);  // can use (cond) ?  true : false

	return 0;
}
