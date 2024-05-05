/*
 * main.c
 *
 *  Created on: May 5, 2024
 *      Author: BADA
 */

#include "stdio.h"
#include "stdbool.h"


int main(){

	int x1, x2, x3;
	printf("Enter two integers: ");
	fflush(stdout);
	scanf("%d %d",&x1,&x2);
	x3=x1+x2;
	printf("Sum: %d",x3);



return 0;
}


