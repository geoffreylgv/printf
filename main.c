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
	len = _printf("%d - %d = %d\n", 1024, 2048, -1024);
	len2 = printf("%d - %d = %d\n", 1024, 2048, -1024);
	_printf("len = %d\n", len);
	printf("len2 = %d\n", len2);
	_printf("\n______________END_____________\n");
	return (0);
}

