#include "main.h"
/**
 * print_triangle - Draws a straight line using the character _.
 * @size: The number of _ characters to be printed.
 */
void print_triangle(int size)
{
	int a, i, j;
	int row = (size - 1)

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (a = 0; a < row; a++)
				_putchar(' ');
				row--;

			for (j = 0; j < (i + 1); j++)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
