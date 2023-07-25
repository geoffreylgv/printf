#include "main.h"

/**
 * handle_digit - handles digits in printf
 * @num: number parameter
 * Return: (i) count
 */
int handle_digit(int num)
{
	int i;

	i = 0;

	if ((num / 10) > 0)
	{
		i = handle_digit(num / 10);
		handle_digit(num % 10);
	}
	if (num < 10)
	{
		_putchar(48 + num);
		i++;
	}
	return (i);
}
