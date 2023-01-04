#include <unistd.h>

/**
 * _putchar - writes the character
 */

int _putchar(char c)
{
	return write(STDOUT_FILENO, &c, 1);
}
