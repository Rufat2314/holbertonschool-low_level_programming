#include "main.h"
/**
 * print_sign -  checks for lowercase character.
 * @n: The character to be checked.
 *
 * Return: Always(Success)
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (1);
	}
}
