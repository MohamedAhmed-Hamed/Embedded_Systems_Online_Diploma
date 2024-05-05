/*
 * main.c
 *
 *  Created on: May 5, 2024
 *      Author: BADA
 */
#include <stdio.h>

int main( )
{
    float x1, x2, product;
    printf("Enter two numbers: ");

    fflush(stdout);
    scanf("%f %f",&x1,&x2);

    product = x1*x2;
    printf("Product: %f",product);
    return 0;
}

