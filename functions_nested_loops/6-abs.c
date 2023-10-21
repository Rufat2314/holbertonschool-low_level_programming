#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @n: The character to be checked.
 *
 * Return: Always(Success)
 */
int _abs(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
