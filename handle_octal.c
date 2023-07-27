#include "main.h"

/**
 * handle_octal - Handles the 'o' format
 * @args: parameter value to convert
 *
 * Return: count printed
 */
int handle_octal(va_list args)
{
	char *str;
	int i;

	str = _itoa(va_arg(args, unsigned int), 8);

	i = _puts(str);

	return (i);
}

