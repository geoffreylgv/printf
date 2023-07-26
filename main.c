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
	int len, len3, len4, len6;

	len = _printf("test\n");

	len6 = _printf("%s\n", NULL);
	len3 = printf("%s\n", NULL);
	_printf(" len3 = %d\n", len3);
	_printf(" len6 = %d\n", len6);
	len4 = _printf("%s\n");
	printf("%s\n");

	_printf("char:%c, string:%s\n", 't', "test");

	_printf("somthin fake%\n");
	_printf("fake %vinci %\n");
	printf("real %vinci %\n");
	printf("somethn real%\n");

	_printf("len4 = %d\n", len4);
	_printf("len = %d\n", len);
	_printf("len6 = %d\n", len6);
	_printf("char : %c\n", NULL);
	printf("char : %c\n", NULL);
	_printf("Percent:[%%%]\n");
	_printf("Len:[%r]\n", 3);
	printf("Len:[%r]\n", 4);
	_printf("1l here %c \n", NULL);
	printf("2l here %c \n", NULL);
	_printf("1Hello, % s %c %s %\n", "World", 'a', "lx");
	printf("2Hello, % s % c % s %\n", "World", 'a', "lx");
	printf("\n");
	_printf(NULL);
	printf(NULL);
	_printf("\n______________END_____________\n");
	return (0);
}

