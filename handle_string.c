#include "main.h"

/**
 * handle_string - Handles the 's' format
 * @str: string parameter
 *
 * Return: String count char printed
 */
int handle_string(char *str)
{
	int i;

	i = 0;
	if (str == NULL)
	{
		i = handle_string("(null)");
		return (i);
	}

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		i++;
	}
	return (i);

}

