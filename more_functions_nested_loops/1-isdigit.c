#include "main.h"
/**
 * _isdigit - prints the last digit of a number.
 * @c: The character to be checked.
 *
 * Return: Always(Success)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
