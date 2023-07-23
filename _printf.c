#include "main.h"

/**
 * _printf - The standard print formatted of the original c
 * @format: String character, the format string is
 * composed of zero or more directives, see: man 3 printf
 *
 * Return: Always 0 on success
 */
int _printf(const char *format, ...)
{

	va_list arglist;
	char arg[3];

	if (format == NULL)
		return (-1);

	return (0);
}

