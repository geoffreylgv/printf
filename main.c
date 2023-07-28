#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * main - Entry point test function
 *
 * Return: Success
 */
int main(void)
{
	int len, len2;

	long int ll = INT_MAX;

	ll *= 2;

	_printf("There is %X bytes in %X KB\n", 1024, 1);
	_printf("there is %x bytes in %x KB\n", 1024, 1);
	_printf("%x + %x = %x\n", INT_MAX, INT_MAX, ll );
	_printf("%X + %X = %X\n", INT_MAX, INT_MAX, ll);
	_printf("%u == %o == %x == %X\n", 1024, 1024, 1024, 1024);
	_printf("uuoxxX%xuoXo\n", 1024);

	len = _printf("%d - %d = %d\n", 1024, 2048, -1024);
	len2 = printf("%d - %d = %d\n", 1024, 2048, -1024);
	_printf("len = %d\n", len);
	printf("len2 = %d\n", len2);
	_printf("______Binary________\n");
	_printf("%b\n", 98);
	_printf("There is %b bytes in %b KB\n", 1024, 1);
	_printf("%b - %b = %b\n", 2048, 1024, 1024);
	_printf("\n______________END_____________\n");
	return (0);
}

