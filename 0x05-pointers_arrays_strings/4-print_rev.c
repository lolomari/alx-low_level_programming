#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string parameter input
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int index;

	/*finds the lenght of string without null character*/
	for (index = 0; s[index] != '\0'; ++index)
		;

	/*print char from the last index without null character*/
	for (--index; index >= 0; --index)
		_putchar(s[index]);
	_putchar('\n');
}
