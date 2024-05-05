/*
 * main.c
 *
 *  Created on: May 5, 2024
 *      Author: BADA
 */


#include <stdio.h>

int main( )

{
	char  c;
	printf("Enter an alphabet: ");
	fflush(stdout);
	scanf("%c", &c);
	if(c =='i' || c=='I' ||c=='e'||c=='E'||c=='a'||c=='A'||c=='o'||c=='O'||c=='u'||c=='U')
		printf("%c is a vowel",c);
	else
		printf("%c is a consonant",c);  // can use (cond) ?  true : false

	return 0;
}

