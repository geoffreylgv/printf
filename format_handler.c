#include "main.h"

/**
 * print_percent - function prints percent
 * @format: format
 * @arglist: list of arg
 *
 * Return: charater count to print
 */
int print_percent(char *format, va_list arglist)
{
	(void)format;
	(void)arglist;
	_putchar("%");
	return (1);
}

/**
 * print_char - print chararacter
 * @format: format
 * @arglist: list of arg
 *
 *Return:character count to print
 */
int print_char(char *format, va_list arglist)
{
	(void)format;
	_putchar(va_arg(arglist, int));
	return (1);
}


/**
 * print_string - print string
 * @format: format
 * @arglist: list of arg
 *
 * Return: string count to print
 */
int print_string(char *format, va_list arglist)
{
	char *string;
	int count;

	string = va_arg(arglist, char*);
	(void)format;

	if (string)
		count = _puts(string);

	return (count);
}


