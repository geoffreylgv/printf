#include "main.h"

/**
 * handle_unsigned_digit - Handles the 'u' format
 * @args: parameter value to convert
 *
 * Return: count printed
 */
int handle_unsigned_digit(va_list args)
{
	char *str;
	int i;

	str = _itoa(va_arg(args, unsigned int), 10);

	i = _puts(str);

	return (i);
}

