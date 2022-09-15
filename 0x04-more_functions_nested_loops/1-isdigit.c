#include "main.h"

/**
 * _isdigit - check for a digit (0 through 9)
 * @c: digit to be checked
 * Return: 1 if c is a digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
