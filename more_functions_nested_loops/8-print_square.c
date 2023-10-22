#include "main.h"
/**
 * print_square - Draws a straight line using the character _.
 * @size: The number of # characters to be printed.
 */
void print_square(int size)
{
	int a, i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (a = 0; a < n; a++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
