#include "main.h"
/**
 * print_diagonal - Draws a straight line using the character _.
 * @n: The number of _ characters to be printed.
 */
void print_diagonal(int n)
{
	int a, i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (a = 0; a <= i; a++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
