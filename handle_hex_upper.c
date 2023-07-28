#include "main.h"

/**
 * handle_hex_upper - Handles the 'X' hexadecimal format
 * @args: parameter value to convert
 *
 * Return: count char printed
 */
int handle_hex_upper(va_list args)
{
	char *str;
	int i, v;

	i = 0;
	v = 0;

	str = _itoa(va_arg(args, unsigned int), 16);

	while (str[v] != '\0')
	{
		if (str[v] >= 'a' && str[v] <= 'z')
		{
			str[v] = str[v] - 32;
		}
		v++;
	}

	i = _puts(str);

	return (i);
}

