#include "main.h"

/**
 * handle_digit - handles digits in printf
 * @num: number parameter
 * @count: number of character
 *
 * Return: (i) count
 */
int handle_digit(int num, int count)
{
	if (num < 0)
	{
		_putchar('-');
		count++;
		num = abs(num);
	}
	if ((num / 10) > 0)
	{
		handle_digit((num / 10), count);
		handle_digit((num % 10), count);
	}
	if (num < 10)
	{
		_putchar(48 + num);
		count++;
	}
	return (count);
}

