#include "main.h"

/**
 * main - Write a function that swaps the values 
 * of two integers
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
