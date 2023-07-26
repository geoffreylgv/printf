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
	len = _printf("len = %d\n", -561024);
	len2 = printf("len = %d\n", -581024);
	_printf("len = %d\n", len);
	printf("len2 = %d\n", len2);
	_printf("\n______________END_____________\n");
	return (0);
}

