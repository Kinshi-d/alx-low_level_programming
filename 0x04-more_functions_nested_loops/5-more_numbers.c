#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */

void more_numbers(void)
{
	int l, m;

	for (l = 0; l < 10; l++)
	{
		for (m = 0; m < 15; m++)
		{
			if (m >= 10)
				_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
		}
		_putchar('\n')
	}
}		
