#include "main.h"

/**
 * handle_string - Handles the 's' format
 * @str: string parameter
 *
 * Return: String count char printed
 */
int handle_string(char *str)
{
	int i, len;

	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
}
