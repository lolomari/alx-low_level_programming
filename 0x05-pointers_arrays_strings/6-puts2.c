#include "main.h"

/**
 * put2 - print every character of a string
 *
 * @str: string parameter input
 *
 * Return: Nothing
 */

void put2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
