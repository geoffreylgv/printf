#include "main.h"

/**
 * _puts - print a whole character / string
 * @c: entry string / string ptr to print
 *
 * Return: string counter
 *
 */
int _puts(char *c)
{
	int count = 0;

	while (c[count])
	{
		_putchar(c[count]);
		count++;
	}
	return (count);
}

