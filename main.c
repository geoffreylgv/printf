#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	long int ll = INT_MAX;

	ll *= 2;

	_printf("There is %X bytes in %X KB\n", 1024, 1);
	_printf("there is %x bytes in %x KB\n", 1024, 1);
	_printf("%x + %x = %x\n", INT_MAX, INT_MAX, ll );
	_printf("%X + %X = %X\n", INT_MAX, INT_MAX, ll);
	_printf("%u == %o == %x == %X\n", 1024, 1024, 1024, 1024);
	_printf("uuoxxX%xuoXo\n", 1024);
	return (0);
}
