#include "main.h"
/**
 * more_numbers - prints every minute of the day of Jack Bauer
 */
void more_numbers(void)
{
	int n, m;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m <= 14; m++)
		{
			_putchar(m + '0');
		}
		_putchar('\n');
	}
}
