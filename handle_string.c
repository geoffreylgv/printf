#include "main.h"

/**
 * handle_string - Printing a string
 * @str: The string to print
 *
 * Return: String count to print integer
 */
int handle_string(char *str)
{
	int i;

	i = 0;

	if (str == NULL)
	{
		handle_string("No args passed");
		return (i++);
	}
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);

}

