#include "main.h"

/**
 * _puts - prints a str
 * @str: pointer to the string to print
 *
 * Return: number of character count
 * see: 'geoffreylgv' github account
 */
int _puts(char *str)
{
	int index = 0;

	while (str[index])
	{
		_putchar(str[index]);
		index++;
	}
	return (index);
}
