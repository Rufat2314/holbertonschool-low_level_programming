#include "main.h"
/**
 * _isalpha -  checks for lowercase character.
 * @c: The character to be checked.
 *
 * Return: Always(Success)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
