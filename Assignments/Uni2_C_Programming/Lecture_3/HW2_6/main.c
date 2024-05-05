/*
 * main.c
 *
 *  Created on: May 5, 2024
 *      Author: BADA
 */

#include <stdio.h>

int main( )

{
	 int  n,sum=0;  // sum=0 unlike matlab or it will have a value
	int i=1;
	printf("Enter an integar: ");
	fflush(stdout);
	scanf("%d", &n);
	if(n==1)
		printf("Sum is %d  ",n);


	while(i <=n){
		sum=sum+i;  //sum+=i
		++i; // ++i (i=6 then stored)   i++ ( stored then +1 )
	}
	printf("Sum is %d  ",sum);




	return 0;
}

