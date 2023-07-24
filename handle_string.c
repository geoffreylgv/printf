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
	char *str;

	i = 0;
	str = va_arg(args, char *);

	if (str == NULL)
	{
		str = "NULL Here";
	}

	while (*str != '\0')
	{
		i += _putchar(*str);
		str++;
	}
	return (i);

}

