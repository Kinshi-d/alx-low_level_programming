#include <stdio.h>

/**
 * swap_int - Swap the values of 2 integers
 * @a: The first integer to be swapped
 * @b: The second integer to be swapped
 *
 * Return: 0
 */

void swap_int(int *a, int *b);
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
