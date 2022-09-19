#include "main.h"

/**
 * reset_to_98 - changes the value of the variable
 * that's pointed to by the argumnt to 98
 * @n: pointer variable
 */
void reset_to_98(int *n)

{
	int n;

	n = 402;
	printf("%d\n", n);
	reset_to_98(&n);


	return (0)
}
