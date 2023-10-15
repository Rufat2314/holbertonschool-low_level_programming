/*
 * File NAme: 6-size.c
 * Sizes of different types
 */

#include <stdio.h>

/**
 * main - Prints Sizes of
 *        different data types.
 *
 * Return: Always 0.
 */
int main(void)
{
        printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of float: %zu bytes\n", sizeof(float));
	printf("Size of double: %zu bytes\n", sizeof(double));
	printf("Size of char: %zu byte\n", sizeof(char));
    
	return 0;
}
