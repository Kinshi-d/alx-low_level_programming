#include <stdio.h>
/**
 * main - print out sizes of data types in c
 * code by vickson
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %d byte(s)\n", Sizeof(char));
	printf("Size of an int: %d byte(s)\n", Sizeof(int));
	printf("Size of a long int: %d byte(s)\n", Sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", Sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", Sizeof(float));
	return (0);
}