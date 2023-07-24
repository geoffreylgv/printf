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
	int len, len4, len6;

	len = _printf("test\n");

	len6 = _printf("%s.\n", NULL);

	len4 = _printf("%s.\n", "test");

	_printf("char : %c , string : %s\n", 't', "test");

	printf("%d\n", len4);
	printf("%d\n", len);
	printf("%d\n", len6);
	_printf("char : %c\n", 'c');
	_printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", 3);
	printf("Len:[%d]\n", 4);

	_printf("______________END_____________\n");


	return (0);
}

