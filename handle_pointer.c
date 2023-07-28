#include "main.h"

/**
 * handle_pointer - Handles the 'p' pointer format
 * @args: parameter value to convert
 *
 * Return: count char printed
 */
int handle_pointer(va_list args)
{
	char *str;
	int i;

	i = 0;

	str = _itoa(va_arg(args, unsigned int), 16);

	i = _puts(str);

	return (i);
}

