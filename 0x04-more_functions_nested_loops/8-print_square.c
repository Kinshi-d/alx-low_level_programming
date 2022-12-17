#include "main.h"

/**
 * print_square - prints a square of size size
 * @size: size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	j = 0;

	if (size < 1)
		_putchar('\n');

	while (j < size)
	{
		i = 0;
		while (i < size)
		{
			_putchar('#');
			i++;
		}
		_putchar('\n');
		j++;
	}
}
