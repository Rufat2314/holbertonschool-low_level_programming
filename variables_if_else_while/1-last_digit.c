#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints if number is positive, zero or negative
 *
 * Return: Always (Success)
 */
int main(void)
{
        int m, n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;

	m = n % 10;

	printf("The last digit of the number %d is %d \n", n, m);

        return (0);
}
