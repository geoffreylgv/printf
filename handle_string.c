#include "main.h"

/**
 * handle_string - Handles the 's' format
 * @args: va_list containing
 *
 * Return: String count char printed
 */
int handle_string(va_list args)
{
	int i;

	i = 0;

	cahr *str = va_arg(args, int);

	if (str == NULL)
	{
		str = "NULL Here";
	}
	while (*str != '\0')
	{
		i += _putchar(*str);
		i++;
	}
	return (i);

}

