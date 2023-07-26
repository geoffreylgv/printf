#include "main.h"

/**
 * handle_digit - handles digits in printf
 * @num: number parameter
 * Return: (i) count
 */
int handle_digit(int num)
{
	static int i;

	if (num < 0)
        {
              _putchar('-');
              i++;
              num = abs(num);
        }
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
