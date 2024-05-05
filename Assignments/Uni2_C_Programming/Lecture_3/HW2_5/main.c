/*
 * main.c
 *
 *  Created on: May 5, 2024
 *      Author: BADA
 */
#include <stdio.h>

int main( )

{
	char  c;    // char a has 97 ascii, all the way to Z, remember Capital case
	printf("Enter a Character: ");
	fflush(stdout);
	scanf("%c", &c);
	if((c>='a' && c<='z') ||(c>='A' && c<='Z'))
		printf("%c is an alphabet  ",c);

	else
		printf("%c is not an alphabet ",c);

	return 0;
}


