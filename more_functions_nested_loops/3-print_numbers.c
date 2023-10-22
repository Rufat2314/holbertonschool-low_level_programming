#include "main.h"
/**
 * print_numbers - prints every minute of the day of Jack Bauer
 */
void print_numbers(void)
{
	int m;

	for (m = 0; m <= 9; m++)
	{
		_putchar(m + '0');
	}
	_putchar('\n');
}
