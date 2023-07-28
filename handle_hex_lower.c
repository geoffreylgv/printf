#include "main.h"

/**
 * handle_hex_lower - Handles the 'x' hexadecimal format
 * @args: parameter value to convert
 *
 * Return: count char printed
 */
int handle_hex_lower(va_list args)
{
	char *str;
	int i;

	str = _itoa(va_arg(args, unsigned int), 16);

	i = _puts(str);

	return (i);
}

