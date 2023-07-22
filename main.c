#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len2;
	int len3, len4, len5;
	unsigned int ui;
	void *addr;

	printf("Original printf shows the way !\n\n");

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	len3 = _printf("Here is a test for integer ten %d.\n", 10);
	len4 = _printf("My github username is %s.\n", "geoffreylgv");
	len5 = _printf("Oya, let's print percent %%.\n");

	printf("______________END_____________\n");


	return (0);
}

