#include "main.h"
/**
 * _isupper - prints the last digit of a number.
 * @c: The character to be checked.
 *
 * Return: Always(Success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
