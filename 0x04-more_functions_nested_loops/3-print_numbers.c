#include "main.h"

/**
 * print_numbers - print integer from 0 to 9
 */

void print_number(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
