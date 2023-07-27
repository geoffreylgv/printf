#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <limits.h>

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;

	len = _printf("%o", 1024);
	len2 = printf("%o", 1024);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	_printf("%o", UINT_MAX);
	_printf("%o - %o = %o\n", 2048, 1024, 1024);
	_printf("There is %o bytes in %o KB\n", 1024, 1);
	_printf("%u", 1024);
	return (0);
}
