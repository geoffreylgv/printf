#include "main.h"

/**
 * handle_binary - Handles the 'b' format
 * @args: parameter value to convert
 *
 * Return: String count char printed
 */
int handle_binary(va_list args)
{
	char *str;
	int i;

	str = _itoa(va_arg(args, unsigned int), 2);

	i = _puts(str);

	return (i);
}

